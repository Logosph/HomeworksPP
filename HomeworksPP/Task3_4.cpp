#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Task3_4() {
    string s = "";

    char c = '\0';
    cin.get(c);
    c = '\0';

    cout << "Enter string to find numbers in it: " << endl;
    while (cin.get(c) && c != '\n') {
        s += c;
    }

    ofstream o("data3_4.txt");
    o << s;
    o.close();

    fstream f("data3_4.txt");
    s = "";
    while (!f.eof()) {
        getline(f, s);
        char* str = &s[0];

        for (;*str != '\0'; str++) {
            if ((int)*str < 58 && (int)*str > 47) {
                cout << *str << " ";
            }
        }
    }
    cout << endl;
}