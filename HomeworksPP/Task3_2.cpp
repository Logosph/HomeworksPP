#include <iostream>
#include <cmath>

using namespace std;

void Task3_2() {
    double m, k = 0, p = pow(10, 5), div = pow(10, 5), r = p / 100, S, n, m0;

    cout << "Enter S: ";
    if (!(cin >> S)) {
        cout << "Wrong input" << endl;
        return;
    }
    cout << "Enter n: ";
    if (!(cin >> n)) {
        cout << "Wrong input" << endl;
        return;
    }
    cout << "Enter m: ";
    if (!(cin >> m0)) {
        cout << "Wrong input" << endl;
        return;
    }
    if (S < 0 || n < 0 || m0 < 0)
    {
        cout << "Wrong input" << endl;
        return;
    }

    m = (S * r * pow(r + 1, n)) / (12 * (pow(r + 1, n) - 1));
    while (abs(m0 - m) > 0.00000001)
    {
        while (m0 > m)
        {
            p += div;
            r = p / 100;
            m = (S * r * pow(r + 1, n)) / (12 * (pow(r + 1, n) - 1));
        }
        k++;
        div = pow(10, 2 - k);
        while (m0 < m)
        {
            p -= div;
            r = p / 100;
            m = (S * r * pow(r + 1, n)) / (12 * (pow(r + 1, n) - 1));
        }
        k++;
        div = pow(10, 2 - k);
    }
    cout << "p = " << p << endl;
    return;
}