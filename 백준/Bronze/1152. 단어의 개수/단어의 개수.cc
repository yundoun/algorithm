#include <iostream>
#include <algorithm>
#include <string>
using	namespace std;

string str;
int answer = 1;

void input() {
	getline(cin, str);
}

void solution() {

	if (str.front() == ' ') answer = 0;
	if (str.front() == ' ' && str.back() == ' ') answer = -1;
	else if (str.back() == ' ') answer = 0;


	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') answer++;
	}
	cout << answer;
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