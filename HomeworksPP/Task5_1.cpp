#include <iostream>

using namespace std;

int gcd_by_division(int num1, int num2) {
	num1 = abs(num1);
	num2 = abs(num2);
	if (num1 == 0 || num2 == 0){
		return 0;
	}
	while (num1 != 0 && num2 != 0) {
		if (num1 > num2) {
			num1 %= num2;
		}
		else {
			num2 %= num1;
		}
	}
	return num1 + num2;
}

int gcd_by_substraction(int num1, int num2) {
	num1 = abs(num1);
	num2 = abs(num2);
	if (num1 == 0 || num2 == 0) {
		return 0;
	}
	while (num1 != 0 && num2 != 0) {
		if (num1 > num2) {
			num1 -= num2;
		}
		else {
			num2 -= num1;
		}
	}
	return num1 + num2;
}

void Task5_1() {
	int num1, num2;
	cout << "Enter first number: ";
	if (!(cin >> num1)) {
		cout << "Wrong input" << endl;
		return;
	}

	cout << "Enter second number: ";
	if (!(cin >> num2)) {
		cout << "Wrong input" << endl;
		return;
	}

	cout << "GCD by division: " << gcd_by_division(num1, num2) << endl;
	cout << "GCD by substraction: " << gcd_by_substraction(num1, num2) << endl;

}