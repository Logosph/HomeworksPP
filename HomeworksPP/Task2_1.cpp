#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void Task2_1() {
    double h = 0, R = 0, r = 0, l = 0, V = 0, S = 0;

    cout << "Enter h: ";
    if (!(cin >> h) || h <= 0) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter R: ";
    if (!(cin >> R) || R <= 0) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter r: ";
    if (!(cin >> r) || r <= 0) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter l: ";
    if (!(cin >> l) || l <= 0) {
        cout << "Wrong input" << endl;
        return;
    }
    
    V = M_PI * h * (R*R + R*r + r*r) / 3;
    S = M_PI * (R * R + (R + r) * l + r * r);
    
    cout << "V = " << V << endl << "S = " << S << endl;
    return;
}