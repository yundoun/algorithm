#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using	namespace std;

int N;

void input() {
	cin >> N;

	vector<int>v(10001);

	for (int i = 0; i < N; i++) {
		int index;
		cin >> index;
		v[index]++;
	}


	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < v[i]; j++) {
			cout << i << "\n";
		}
	}
}

void solution() {


}

void solve() {
	input();
	solution();
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;

}