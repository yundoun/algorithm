#include <iostream>
#include <algorithm>

#define MAX 1500005
using	namespace std;

int N;
int current = 0;
int sch[MAX][2];
int DP[MAX];

void input() {
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> sch[i][0] >> sch[i][1];
		// sch[i][0] : 상담 기간
		// sch[i][1] : 받는 비용
	}
}

void solution() {
	for (int i = 1; i <= N + 1; i++) {
		// i = 시간표 일수

		current = max(current, DP[i]);

		if (i + sch[i][0] > N + 1) { continue; } // 상담이 퇴사일보다 늦게 끝날때 (시간표 일수에서 상담 시간을 더한 것과 퇴사일 비교)
		DP[i + sch[i][0]] = max(sch[i][1] + current, DP[i+sch[i][0]]);
	}
}

void solve() {
	input();
	solution();
	cout << current << endl;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();
	
	return 0;

}