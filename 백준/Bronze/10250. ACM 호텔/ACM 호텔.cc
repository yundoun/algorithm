#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int T; // 테스트 케이스
int H, W, N; // 층 수, 방 수, 손님의 순서
int CH, CW;	// 손님이 배정받을 층 수와 방 번호


void input() {
	cin >> T;
}

void solution() {
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		string ans = "";

		if (N % H == 0) CH = H;
		else  CH = N % H;
		// 층수 구하기
		
		ans += to_string(CH);

		if (N % H == 0) CW = N / H;
		else CW = N / H + 1;
		// 방 번호 구하기

		if (CW < 10)ans +='0'+ to_string(CW);
		else ans += to_string(CW);

		
		cout << ans << endl;
	}
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

