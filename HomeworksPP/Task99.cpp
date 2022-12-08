#include <iostream>
#include <random>

using namespace std;

bool find(int* point, int* end, int find) {
	while (point != end) {
		if (*point == find) {
			return true;
		}
		point++;
	}
	return false;
}

void rev(int* begin, int* end) {
	while (begin < end) {
		int tmp = *end;
		*end = *begin;
		*begin = tmp;
		end--;
		begin++;
	}
}

void Task99() {
	int nums[4] = { 0, 0, 0, 0 };
	int guess[4];
	int pluses = 0, minuses = 0, number_in;
	while (nums[0] == 0) {
		nums[0] = rand() % 10;
	}
	do {
		nums[1] = rand() % 10;
	} while (nums[1] == nums[0]);
	do {
		nums[2] = rand() % 10;
	} while (nums[2] == nums[1] || nums[2] == nums[0]);
	do {
		nums[3] = rand() % 10;
	} while (nums[3] == nums[2] || nums[3] == nums[1] || nums[3] == nums[0]);
	while (pluses != 4) {
		pluses = 0;
		minuses = 0;
		if (!(cin >> number_in)) {
			cout << "wrong input" << endl;
			return;
		}
		for (int i = 0; i < 4; i++) {
			guess[i] = number_in % 10;
			number_in /= 10;
		}
		rev(&guess[0], &guess[3]);
		for (int i = 0; i < 4; i++) {
			if (guess[i] == nums[i]) {
				pluses++;
				continue;
			}
			else if (find(&nums[0], &nums[3], guess[i])) {
				minuses++;
			}
		}
		cout << "Pluses: " << pluses << endl;
		cout << "Minuses: " << minuses << endl;
	}
}
