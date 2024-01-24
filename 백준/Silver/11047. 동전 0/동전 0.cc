#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using	namespace std;

int N, K, cnt;
vector<int>money(11,0);

void input() {

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> money[i];
	}
}


void solution() {
	for (int i = N-1 ; i >= 0; i--) {
		if (money[i] <= K) {
			cnt += K / money[i];
			K = K % money[i];
		}
	}
	cout << cnt;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input();
	solution();

	return 0;

}