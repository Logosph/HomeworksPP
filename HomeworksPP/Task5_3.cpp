#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Task37() {
	cout << "Task 3.7" << endl;
	string s;
	char c = '\0';
	cout << "Write your text (end it with \\): " << endl;
	while (cin.get(c) && c != '\\') {
		s += c;
	}

	ofstream f("data5_3_1.txt");
	f << s;
	f.close();

	ifstream read("data5_3_1.txt");

	s = "";
	int count = 0;
	int maximum = 0;
	while (!read.eof()) {
		getline(read, s);
		char* cur = &s[0];
		while (*cur != '\0') {
			if (*cur != '.') {
				count++;
			}
			else {
				maximum = maximum > count ? maximum : count;
				count = 0;
			}
			cur++;
		}
	}
	cout << "Length of longest phrase is " << maximum << endl;
	read.close();
}

void Task31() {
	cout << "Task 3.1" << endl;
	string s;
	char c = '\0';
	cout << "Write your text (end it with \\): " << endl;
	while (cin.get(c) && c != '\\') {
		s += c;
	}

	char sep = '\0';
	string temp;
	cout << "Enter separator: " << endl;
	cin >> temp;
	sep = temp[0];

	ofstream f("data5_3_2.txt");
	f << s;
	f.close();

	ifstream read("data5_3_2.txt");
	s = "";
	while (!read.eof()) {
		getline(read, s);
		char* cur = &s[0];
		while (*cur != '\0') {
			if (*cur == ' ') {
				*cur = sep;
			}
			cur++;
		}
		cout << s << endl;
	}

}

void Task5_3() {
	setlocale(LC_ALL, "Russian");
	
	Task37();
	Task31();

	return;
}