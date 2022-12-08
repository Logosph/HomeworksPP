#include <iostream>
#include <vector>

using namespace std;

int index(vector<int> vec, int find) {
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == find) {
			return i;
		}
	}
	return -1;
}

int maximum(vector<int> vec) {
	int maxi = 0;
	for (int i = 0; i < vec.size(); i++) { maxi = max(maxi, vec[i]); }
	return maxi;
}

void spinners5() {
	int N, K, m, count, ans1, ans2, index_to_del;
	cin >> N >> K;
	vector<int> positions;
	vector<int> counts;
	positions.push_back(N);
	counts.push_back(1);
	while (K > 0) {
		m = maximum(positions);
		count = K < counts[index(positions, m)] ? K : counts[index(positions, m)];
		index_to_del = index(positions, m);
		positions.erase(positions.begin() + index_to_del);
		counts.erase(counts.begin() + index_to_del);
		K -= count;
		ans1 = (m - 1) / 2;
		ans2 = m - 1 - ans1;
		if (index(positions, ans1) >= 0) {
			counts[index(positions, ans1)] += count;
		}
		else {
			counts.push_back(count);
			positions.push_back(ans1);
		}
		if (index(positions, ans2) >= 0) {
			counts[index(positions, ans2)] += count;
		}
		else {
			counts.push_back(count);
			positions.push_back(ans2);
		}
	}
	cout << ans1 << endl << ans2 << endl;
	//vector<int> test = { 1, 2, 3, 4, 5, 6, 7 };
	//test.erase(test.begin() + 1);
	//for (int i = 0; i < test.size(); i++) {
	//	cout << test[i] << " ";
	//}
	//cout << endl;
}
