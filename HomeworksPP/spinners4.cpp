#include <iostream>

using namespace std;

void spinners4() {
	bool car[9][6];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 6; j++) {
			car[i][j] = false;
		}
	}

	int N, tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp <= 36) {
			car[(tmp - 1) / 4][(tmp - 1) % 4] = true;
		}
		else {
			car[8 - (tmp - 37) / 2][4 + tmp % 2] = true;
		}
	}

	int a[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < 9; i++) {
		if (
			car[i][0] &&
			car[i][1] &&
			car[i][2] &&
			car[i][3] &&
			car[i][4] &&
			car[i][5]
			) {
			a[i] = 1;
		}
	}

	int max_len = 0, cur = 0;
	for (int i = 0; i < 10; i++) {
		if (i < 10) {
			if (a[i] == 1) {
				cur++;
			}
			else {
				max_len = max(max_len, cur);
				cur = 0;
			}
		}
		else {
			max_len = max(max_len, cur);
			cur = 0;
		}
	}

	cout << max_len << endl;
}
