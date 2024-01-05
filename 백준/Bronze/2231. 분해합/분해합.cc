#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using	namespace std;

int N;
int sum;
int ans;
void input() {
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		string tmp = to_string(i);

		for (int j = 0; j < tmp.size(); j++) {
			sum += int(tmp[j])-'0';
		}
		sum += i;

		if (sum == N) {
			ans = i;
			break;
		}
		else sum = 0;
	}
	
}

void solution() {
	cout << ans;
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