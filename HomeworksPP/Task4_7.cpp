#include <iostream>

using namespace std;

int s(int m, int b, int c, int i) {
    if (i != 0) {
        return (m * s(m, b, c, i - 1) + b) % c;
    }
    else {
        return 0;
    }
}

void Task4_7() {
    
    int m, b, c, i;
    cout << "Enter m: ";
    if (!(cin >> m)) {
        cout << "Wrong input" << endl;
        return;
    }
    cout << "Enter b: ";
    if (!(cin >> b)) {
        cout << "Wrong input" << endl;
        return;
    }cout << "Enter c: ";
    if (!(cin >> c)) {
        cout << "Wrong input" << endl;
        return;
    }cout << "Enter i: ";
    if (!(cin >> i)) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << s(m, b, c, i) << endl;

    return;
}