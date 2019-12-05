#include <iostream>
using namespace std;
int main() {
	int T[] = { 0,1,2,3,4,8,9,11 };
	int length = sizeof(T) / sizeof(int);
	int position = 0;
	bool check;
	for (int i = length - 1; i >= 2; i--) {
		check = false;
		int k = T[i] - T[i - 1];
		int p[] = { k - 1, k, k + 1 };
		for (int j = i - 2; j >= 0; j--) {
			if ((T[i - 1] - T[j]) == p[0] ||
				(T[i - 1] - T[j]) == p[1] ||
				(T[i - 1] - T[j]) == p[2]) {
				check = true;
			}
		}
		if (check == false)
			break;
	}
	cout << check;
}