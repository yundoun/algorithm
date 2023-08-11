#include <iostream>
#include <algorithm>
#include <sstream>
using	namespace std;

int N;
void input() {
	cin >> N;
}

void solution() {
	for (int i = 0; i < N / 4; i++) {
		cout << "long" << " ";
	}
	cout << "int";
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