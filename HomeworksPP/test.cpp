#include <iostream>
#include <string>

using namespace std;

void example_foo() {
    double a = 0;

    cout << "Enter a: ";
    if (!(cin >> a)) {
        cout << "Wrong input" << endl;
        return;
    }

    return;
}

int print(string s)
{
    cout << s << endl;
    return 0;
}

void test() {
    cout << stod("Hello") << endl;

}
