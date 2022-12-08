#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

double rectangle() {
    double a, b;

    cout << "Enter first side of rectangle: ";
    if (!(cin >> a) || a <= 0) {
        cout << "Wrong input" << endl;
        return -1;
    }
    cout << "Enter second side of rectangle: ";
    if (!(cin >> b) || b <= 0) {
        cout << "Wrong input" << endl;
        return -1;
    }

    return a * b;
}

double triangle() {
    double a, b, c, p;

    cout << "Enter first side of triangle: ";
    if (!(cin >> a) || a <= 0) {
        cout << "Wrong input" << endl;
        return -1;
    }
    cout << "Enter second side of triangle: ";
    if (!(cin >> b) || b <= 0) {
        cout << "Wrong input" << endl;
        return -1;
    }
    cout << "Enter third side of triangle: ";
    if (!(cin >> c) || c <= 0) {
        cout << "Wrong input" << endl;
        return -1;
    }
    p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double circle() {
    double r;

    cout << "Enter radius of circle: ";
    if (!(cin >> r) || r <= 0) {
        cout << "Wrong input" << endl;
        return -1;
    }
    return M_PI * r * r;
}

void Task4_3() {
    cout << "Square of rectangle is " << rectangle() << endl;
    cout << "Square of triangle is " << triangle() << endl;
    cout << "Square of circle is " << circle() << endl;
}