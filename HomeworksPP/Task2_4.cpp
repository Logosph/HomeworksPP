#include <iostream>

using namespace std;

void Task2_4() {
    double N = 0;

    cout << "Enter N: ";
    if (!(cin >> N)) {
        cout << "Wrong input" << endl;
        return;
    }

    for (int i = 0; i < 10; i++) {
        cout << N + i << endl;
    }

    return;
}