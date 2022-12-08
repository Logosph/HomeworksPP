#include <iostream>

using namespace std;

short sign(double x) {
    return x > 0 ? 1 : x < 0 ? -1 : 0;
}

void Task4_2() {
    double x = 0;

    cout << "Enter number to determinate it's sign: " << endl;
    if (!(cin >> x)) {
        cout << "Wrong input" << endl;
        return;
    }

    x = sign(x);

    cout << (x > 0 ? "+" : x < 0 ? "-" : "0") << endl;

}