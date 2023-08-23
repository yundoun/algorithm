#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str;
int cnt, index;

void input() {
	cin >> str;
}

void solution() {
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '@') {
			cnt++;
		}
		if (str[i] == '(') {
			index = i;
			break;
		}
	}

	cout << cnt;
	cnt = 0;

	for (int i = index; i < str.size(); i++) {
		if (str[i] == '@') {
			cnt++;
		}
	}
	cout << " " << cnt;
}

void solve() {
	input();
	solution();
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;

}

