#include <iostream>

using namespace std;

void Task1_1()
{
    cout << endl << "Task 1.1" << endl;

    double num1 = 0, num2 = 0, summ = 0, sub1 = 0, sub2 = 0, prod = 0, div1 = 0, div2 = 0;

    cout << "Enter first number: ";
    if (!(cin >> num1)) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Enter second number: ";
    if (!(cin >> num2)) {
        cout << "Wrong input" << endl;
        return;
    }

    summ = num1 + num2;
    sub1 = num1 - num2;
    sub2 = num2 - num1;
    prod = num1 * num2;

    cout << "<1> + <2> = " << summ << endl;
    cout << "<1> - <2> = " << sub1 << endl;
    cout << "<2> - <1> = " << sub2 << endl;
    cout << "<1> * <2> = " << prod << endl;

    if (num2 == 0) {
        cout << "Unable to divide <1> on <2>" << endl;
    }
    else {
        div1 = num1 / num2;
        cout << "<1> / <2> = " << div1 << endl;
    }

    if (num1 == 0) {
        cout << "Unable to divide <2> on <1>" << endl;
    }
    else {
        div2 = num2 / num1;
        cout << "<2> / <1> = " << div2 << endl;
    }
    cout << endl;
}

