#include <iostream>
#include <cmath>

using namespace std;

void Task3_1() {
    double S, p, r, n, m;

    cout << "Enter S: ";
    if (!(cin >> S)) {
        cout << "Wrong input" << endl;
        return;
    }
    cout << "Enter p: ";
    if (!(cin >> p)) {
        cout << "Wrong input" << endl;
        return;
    }
    cout << "Enter n: ";
    if (!(cin >> n)) {
        cout << "Wrong input" << endl;
        return;
    }
    if (p <= 0 || S < 0 || n < 0) {
        cout << "Wrong input" << endl;
        return;
    }

    r = p / 100;
    m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
    cout << "m = " << m << endl;

    return;
}
