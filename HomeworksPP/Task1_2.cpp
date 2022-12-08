#include <iostream>

using namespace std;

void Task1_2()
{
    cout <<  endl << "Task 1.2" << endl;
    double b = 0, c = 0, x = 0;
    
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
    cout << endl;
    return;
}