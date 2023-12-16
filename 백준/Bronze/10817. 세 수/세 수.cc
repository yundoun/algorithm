#include <iostream>
#include <algorithm>
#include <vector>
using	namespace std;

vector<int> ary;

int A, B, C;

void input() {
	
	cin >> A >> B >> C;

}

void solution() {
	
	ary.push_back(A);
	ary.push_back(B);
	ary.push_back(C);
	sort(ary.begin(), ary.end());
}

void solve() {
	input();
	solution();

	cout << ary[1];
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;

}