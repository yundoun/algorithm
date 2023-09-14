#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>

using	namespace std;

vector<int> ary;
int N, cnt_sum = 1;

void input() {
	cin >> N;
}

void solution() {
	int i = 1;
	while (cnt_sum < N) {
		cnt_sum += 6 * i;
		i++;
	}

	cout << i;

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