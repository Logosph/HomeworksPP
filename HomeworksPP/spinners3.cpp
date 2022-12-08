#include <iostream>

using namespace std;

void spinners3() {
	unsigned  long long int N, M;
	cin >> N >> M;
	cout << N * (N + 1) * M * (M + 1) / 4  << endl;
}
