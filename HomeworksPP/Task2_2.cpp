#include <iostream>
#include <cmath>

using namespace std;

void Task2_2() {
    double a = 0, x = 0, w = 0;

    cout << "Enter a: ";
    if (!(cin >> a)) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter x: ";
    if (!(cin >> x)) {
        cout << "Wrong input" << endl;
        return;
    }

    if (abs(x) < 1) {
        w = a * log(abs(x));
    }
    else {
        if (a - x * x < 0) {
            cout << "w is not defined" << endl;
            return;
        }
        else {
            w = sqrt(a - x * x);
        }
    }
    cout << "w = " << w << endl << endl;
    return;
}