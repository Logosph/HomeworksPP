#include <iostream>
#include <string>

using namespace std;

int get_code(char s) {
    string alph = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
    char* symb = &alph[0];
    for (; s != *symb; symb++) {}
    return symb - &alph[0];
}

void Task3_5() {
    string s = "";

    char c = '\0';
    cin.get(c);
    c = '\0';
    cout << "Enter string to sort: " << endl;
    while (cin.get(c) && c != '\n') {
        s += c;
    }

    char* s1 = &s[0];
    for (; *s1 != '\0'; s1++) {
        char* s2 = &s[0];
        for (; *s2 != '\0'; s2++) {
            if (get_code(*s2) > get_code(*(s2 + 1))) {
                char tmp = *s2;
                *s2 = *(s2 + 1);
                *(s2 + 1) = tmp;
            }
        }
    }

    cout << s << endl;

    return;
}