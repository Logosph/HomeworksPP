#include <iostream>
#include <algorithm>

using namespace std;

int fact(int n) {
	int ret = 1;
	while (n > 0){
		ret *= n;
		n -= 1;
	}
	return ret;
}

void balls() {
	const int balls_count = 9; // input

	int** arr = new int*[fact(balls_count)];
	for (int i = 0; i < fact(balls_count); i++) {
		arr[i] = new int[balls_count];
	}

	int a[balls_count];
	for (int i = 0; i < balls_count; i++) {
		a[i] = i;
	}

	int k = 0;
	do {
		for (int i = 0; i < balls_count; i++) {
			arr[k][i] = a[i];
		}
		k++;
	} while (next_permutation(a, a + balls_count));

	int count = 0;
	for (int i = 0; i < fact(balls_count); i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == j) {
				count++;
				break;
			}
		}
	}

	cout << count << endl;
}
