#include <iostream>
#include <cmath>

using namespace std;

void Task1_3()
{
    cout << endl << "Task 1.3" << endl;
    double a = 0, b = 0, c = 0, d = 0;

    cout << "Enter a: ";
    if (!(cin >> a)) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter b: ";
    if (!(cin >> b)) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter c: ";
    if (!(cin >> c)) {
        cout << "Wrong input" << endl;
        return;
    }

    if (a == 0) {
        double x = 0;
        if (b != 0) {
            x = -c / b;
            cout << "-c / b = " << x << endl;
        }
        else {
            if (c == 0) {
                cout << "R includes x" << endl;
            }
            else {
                cout << "x is not defined" << endl;
            }
        }
    }
    else {
        d = b * b - 4 * a * c;
        if (d < 0) {
            cout << "x is not defined" << endl;
        }
        else if (d == 0) {
            double x = 0;
            x = -b / (2 * a);
            cout << "X = " << x << endl;
        }
        else {
            double x1 = 0, x2 = 0;
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
    }
    cout << endl;
    return;
}
