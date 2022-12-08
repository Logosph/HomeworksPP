#include <iostream>

using namespace std;

void Task2_5() {
    for (double x = -4; x <= 4; x += 0.5) {
        if (x == 1) {
            cout << "x = " << x << "; y = " << "nan" << endl;
        }
        else {
            cout << "x = " << x << "; y = " << (x * x - 2 * x + 2) / (x - 1) << endl;
        }
    }

    return;
}