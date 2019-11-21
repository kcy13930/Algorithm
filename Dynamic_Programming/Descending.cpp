#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int *arr = new int[3];
	int max_N[2][3] = { {0,0,0}, {0,0,0} };
	int min_N[2][3] = { {0,0,0}, {0,0,0} };
	for (int i = 1; i <= N; i++) {
		cin >> arr[0] >> arr[1] >> arr[2];
		max_N[1][0] = arr[0] + max(max_N[0][0], max_N[0][1]);
		min_N[1][0] = arr[0] + min(min_N[0][0], min_N[0][1]);
		max_N[1][1] = arr[1] + max(max(max_N[0][0], max_N[0][1]), max_N[0][2]);
		min_N[1][1] = arr[1] + min(min(min_N[0][0], min_N[0][1]), min_N[0][2]);
		max_N[1][2] = arr[2] + max(max_N[0][1], max_N[0][2]);
		min_N[1][2] = arr[2] + min(min_N[0][1], min_N[0][2]);
		for (int j = 0; j < 3; j++) {
			max_N[0][j] = max_N[1][j];
			min_N[0][j] = min_N[1][j];
		}
	}
	cout << max(max(max_N[0][0], max_N[0][1]), max_N[0][2]) << " " << min(min(min_N[0][0], min_N[0][1]), min_N[0][2]) << endl;
}