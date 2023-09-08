#include <iostream>
#include <algorithm>
#include <vector>
using	namespace std;


vector <int> ary;

void input() {

	int a = 0, b = 0, c = 0;

	while (true) {
		
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) break;

		ary.push_back(a);
		ary.push_back(b);
		ary.push_back(c);

		sort(ary.begin(), ary.end());

		if (ary[2] * ary[2] == ary[1] * ary[1] + ary[0] * ary[0]) cout << "right" << endl;
		else cout << "wrong" << endl;

		ary.clear();

	}


}

void solution() {
	

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