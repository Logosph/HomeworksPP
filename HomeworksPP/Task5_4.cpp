#include <iostream>
#include <cmath>

using namespace std;

int factorial(int num) {
	int fact = 1;
	for (int i = 2; i <= num; i++) {
		fact *= i;
	}
	return fact;
}

void Task48() {
	cout << "Task 4.8" << endl;

	int a, n;
	cout << "Enter a: ";
	if (!(cin >> a)) {
		cout << "Wrong input" << endl;
	}
	cout << "Enter n: ";
	if (!(cin >> n)) {
		cout << "Wrong input" << endl;
	}
	double y = 0;
	for (int i = 0; i <= n; i++) {
		double divider = 1;
		for (int j = 0; j < i + 1; j++) {
			divider *= (a + j);
		}
		y += (i + 1) / divider;
	}
	cout << "y = " << y << endl;
}

void Task43() {
	cout << "Task 4.3" << endl;
	int n = 0;
	cout << "Enter n: ";
	if (!(cin >> n)) {
		cout << "Wrong input" << endl;
	}

	double y = 1;
	for (int i = 1; i <= n; i++) {
		int chislitel = factorial(i);
		double divider = 0;

		for (int j = 2; j <= i * 2; j++) {
			divider += sin(j);
		}
		y *= (chislitel / divider);
	}

	cout << "y = " << y << endl;
}

void Task5_4() {
	Task48();
	Task43();

	return;
}