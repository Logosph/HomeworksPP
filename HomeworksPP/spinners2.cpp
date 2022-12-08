#include <iostream>

using namespace std;

void spinners2() {
	unsigned int M;
	int four = 0, three = 0;
	cin >> M;
	switch (M % 4)
	{
	case 0:
		four = M / 4;
		break;
	case 1:
		four = M / 4 - 2;
		three = 3;
		break;
	case 2:
		four = M / 4 - 1;
		three = 2;
		break;
	case 3:
		four = M / 4;
		three = 1;
		break;
	}
	cout << (four >= 0 ? three : 0) << endl << (four >= 0 ? four : 0) << endl;
}
