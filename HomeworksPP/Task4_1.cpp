#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Task4_1() {
    string s = "";
    double temp = 0, summa = 0;

    cout << "Enter numbers to sum: " << endl;
    for (int i = 0; i < 10; i++) {
        if (!(cin >> temp)) {
            cout << "Wrong input" << endl;
            return;
        }
        s += to_string(temp) + "\n";
    }
    
    ofstream o("data4_1.txt");
    o << s;
    o.close();

    ifstream f("data4_1.txt");
    s = "";
    while (!f.eof()) {
        getline(f, s);
        temp = atof(s.c_str());
        summa += temp;
    }
    cout << summa << endl;
}