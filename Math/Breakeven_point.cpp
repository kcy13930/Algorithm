#include <iostream>
using namespace std;
int main() {
	int a, b, c, cnt = 0;
	cin >> a >> b >> c;
	if ((c - b) <= 0) cout << -1;
	else cout << int(a / (c - b)+1);
}