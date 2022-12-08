#include <iostream>

using namespace std;

void Task5_2() {
	int num;
	cout << "Enter number to find all simple number below: ";
	if (!(cin >> num)) {
		cout << "Wrong input" << endl;
		return;
	}

	num++;
	bool* sieve = new bool[num];
	for (int i = 2; i < num; i++) {
		for (int j = 2 * i; j < num; j += i) {
			sieve[j] = false;
		}
	}

	for (int i = 2; i < num; i++) {
		if (sieve[i]) {
			cout << i << endl;
		}
	}

}