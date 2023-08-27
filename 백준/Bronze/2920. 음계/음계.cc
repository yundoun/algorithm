#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int x;
string str = "";

void input() {
	for (int i = 0; i < 8; i++) {
		cin >> x;
		str += to_string(x);
	}
	
}

void solution() {
	if (str == "12345678") cout << "ascending";
	else if (str == "87654321") cout << "descending";
	else cout << "mixed";
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

