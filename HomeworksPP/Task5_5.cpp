#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

void Task5_5() {
	int N = 0;
	cout << "Enter number of numbers: ";
	if (!(cin >> N)) {
		cout << "Wrong input" << endl;
	}
	
	string temp;
	string result = "0";
	for (int i = 0; i < N; i++) {
		cin >> temp;
		try {
			stod(temp);
			result += '\n';
			result += temp;
		}
		catch(std::invalid_argument){
			cout << "Wrong input" << endl;
			return;
		}
	}
	ofstream f("data5_5.txt");
	f << result;
	f.close();

	unsigned short int base = 10;
	cout << "Enter new base: ";
	if (!(cin >> base) || base > 9 || base < 2) {
		cout << "Wrong input" << endl;
		return;
	}

	ifstream data("data5_5.txt");
	string s = "";
	getline(data, s);
	while (!data.eof()) {

		double dec_number = 0;
		bool sign = true, flag = false;
		unsigned int tselaya_part;
		double drobnaya_part;
		int m = 0;
		result = "";
		getline(data, s);
		dec_number = stod(s);
		tselaya_part = abs((int)dec_number);
		drobnaya_part = abs(dec_number) - tselaya_part;
		sign = dec_number >= 0;

		while (tselaya_part != 0) {
			result += to_string(tselaya_part % base);
			tselaya_part /= base;
		}
		for (int i = 0; i < s.size(); i++) {
			if (flag) {
				m++;
			}
			if (s[i] == '.') {
				flag = true;
			}
		}
		reverse(result.begin(), result.end());
		result += '.';
		int L = log((pow(10, m)) / 2) / log(base);
		for (int i = 0; i < L; i++) {
			drobnaya_part *= base;
			result += to_string((int)drobnaya_part);
			drobnaya_part -= (int)drobnaya_part;
		}
		cout << (sign ? "" : "-") << result << endl;
		result = "";
	}

	return;
}