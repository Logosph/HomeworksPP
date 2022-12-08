#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Task3_3() {
    string s = "";

    char c = '\0';
    cin.get(c);
    c = '\0';
    cout << "Enter string to write it to file: " << endl;
    while (cin.get(c) && c != '\n') {
        s += c;
    }
    
    ofstream o("data3_3.txt");
    o << s;
    o.close();

    ifstream f("data3_3.txt");
    s = "";

    while (!f.eof()) {
        getline(f, s);
        cout << s << endl;
    }
    cout << endl;
    return;

}