#include <iostream>
#include <cstring>
using namespace std;

int caculator(char* ch, int cnt) {
	while (cnt<strlen(ch)) {
		char c = ch[cnt];
		cnt++;
		if ((c >= 'a') && (c <= 'z')) {
			cout << c;
		}
		else if ((c >= '0') && (c <= '9')) {
			int i = c - '0';
			if ((ch[cnt] >= '0') && (ch[cnt] <= '9')) {
				i = i * 10 + ch[cnt] - '0';
				cnt++;
			}
			cnt++;
			int k = cnt;
			for (int j = 0; j < i; j++) {
				k = caculator(ch, cnt);
			}
			cnt = k;
		}
		else if (c == '}') {
			break;
		}
	}
	return cnt;
}
int main() {
	char* ch = new char;
	cin >> ch;
	caculator(ch,0);
}