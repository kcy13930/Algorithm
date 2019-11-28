#include <iostream>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	int* p = new int[T];
	for (int i = 0; i < T; i++) {
		cin >> N;
		int** q = new int* [N];
		int** q2 = new int* [N];
		p[i] = 1;

		for (int j = 0; j < N; j++) {
			q[j] = new int[2];
			q2[j] = new int[2];
			cin >> q[j][0] >> q[j][1];
		}
		for (int j = 0; j < N; j++) {
			int tmp_0 = q[j][0];
			q2[tmp_0-1][0] = q[j][0];
			int tmp_1 = q[j][1];
			q2[tmp_0 - 1][1] = q[j][1];
		}
		delete q;
		int tmp = q2[0][1];
		for (int j = 1; j < N; j++) {
			if (tmp > q2[j][1]) {
				p[i]++;
				tmp = q2[j][1];
			}
		}
	}
	for (int i = 0; i < T; i++) cout << p[i] << endl;
}