#include <iostream>
#include <cmath>

using namespace std;

void Task2_3() {
    double x = 0, y = 0, b = 0, z = 0;

    cout << "Enter x: ";
    if (!(cin >> x)) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter y: ";
    if (!(cin >> y)) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter b: ";
    if (!(cin >> b)) {
        cout << "Wrong input" << endl;
        return;
    }

    if (b - y > 0 && b - x > 0) {
        z = log(b - y) * sqrt(b - x);
    }
    else {
        cout << "z is not defined" << endl;
    }
    cout << "z = " << z << endl << endl;
    return;
}