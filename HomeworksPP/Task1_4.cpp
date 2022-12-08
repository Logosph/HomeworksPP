#include <iostream>

using namespace std;

void Task1_4()
{
    char day = '\0', lamp = '\0', shade = '\0';

    cout << "Is it day now? (y/n): ";
    if (!(cin >> day) || (day != 'y' && day != 'n')) {
        cout << "Wrong input" << endl;
        return;
    }   

    cout << "Are the curtains open? (y/n): ";
    if (!(cin >> shade) || (shade != 'y' && shade != 'n')) {
        cout << "Wrong input" << endl;
        return;
    }

    cout << "Is the lamp on? (y/n): ";
    if (!(cin >> lamp) || (lamp != 'y' && lamp != 'n')) {
        cout << "Wrong input" << endl;
        return;
    }

    if (lamp == 'y' || (day == 'y' && shade == 'y')) {
        cout << "LIGHT!" << endl;
    }
    else {
        cout << "DARK!" << endl;
    }
    cout << endl;
    return;
}