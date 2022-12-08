#include <iostream>
#include <string>

using namespace std;

void Task4_6() {

    string s;
    char c = '\0';
    cin.get(c);
    c = '\0';
    cout << "Enter Roman number: ";
    while (cin.get(c) && c != '\n') {
        s += c;
    }

    int* arr = new int[10];
    int* ind = arr;

    for (int i = 0; i < size(s); i++) {
        switch (s[i])
        {
        case 'I':
            arr[i] = 1;
            break;
        case 'V':
            arr[i] = 5;
            break;
        case 'X':
            arr[i] = 10;
            break;
        case 'L':
            arr[i] = 50;
            break;
        case 'C':
            arr[i] = 100;
            break;
        case 'D':
            arr[i] = 500;
            break;
        case 'M':
            arr[i] = 1000;
            break;
        default:
            cout << "Wrond input" << endl;
            return;
            break;
        }
        ind++;
    }
    int maximum = 0, summa = 0;

    for (int i = size(s) - 1; i >= 0; i--) {
        if (arr[i] >= maximum) {
            maximum = arr[i];
            summa += arr[i];
        }
        else {
            summa -= arr[i];
        }
    }

    cout << s << " = " << summa << endl;

    delete[] arr;

    return;
}