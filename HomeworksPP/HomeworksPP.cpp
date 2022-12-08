#include <iostream>
#include "Header.hpp"

int main()
{
    int task_number = 0;
    while (true) {
        cout << "Enter number of task: ";
        if (!(cin >> task_number)) {
            cout << "Wrong input" << endl;
        }
        else {
            switch (task_number)
            {
            case 0:
                return 0;
                break;
            case 11:
                Task1_1();
                break;
            case 12:
                Task1_2();
                break;
            case 13:
                Task1_3();
                break;
            case 14:
                Task1_4();
                break;
            case 21:
                Task2_1();
                break;
            case 22:
                Task2_2();
                break;
            case 23:
                Task2_3();
                break;
            case 24:
                Task2_4();
                break;
            case 25:
                Task2_5();
                break;
            case 31:
                Task3_1();
                break;
            case 32:
                Task3_2();
                break;
            case 33:
                Task3_3();
                break;
            case 34:
                Task3_4();
                break;
            case 35:
                Task3_5();
                break;
            case 41:
                Task4_1();
                break;
            case 42:
                Task4_2();
                break;
            case 43:
                Task4_3();
                break;
            case 44:
                Task4_4();
                break;
            case 45:
                Task4_5();
                break;
            case 46:
                Task4_6();
                break;
            case 47:
                Task4_7();
                break;
            case 48:
                Task4_8();
                break;
            case 51:
                Task5_1();
                break;
            case 52:
                Task5_2();
                break;
            case 53:
                Task5_3();
                break;
            case 54:
                Task5_4();
                break;
            case 55:
                Task5_5();
                break;
            case 71:
                spinners1();
                break;
            case 72:
                spinners2();
                break;
            case 73:
                spinners3();
                break;
            case 74:
                spinners4();
                break;
            case 75:
                spinners5();
                break;
            case 99:
                Task99();
                break;
            //case -1:
            //    Stepik();
            //    break;
            case 6:
                balls();
                break;
            case -2:
                test();
                break;
            default:
                cout << "Wrong number" << endl;
                break;
            }
        }
    }
    return 0;
}

