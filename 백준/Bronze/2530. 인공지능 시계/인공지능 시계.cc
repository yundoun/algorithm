#include <iostream>
#include <algorithm>

using	namespace std;

int h, m, s;
int t;

void input() {
	cin >> h >> m >> s;
	cin >> t;
}

void solution() {
	if (t >= 3600) {
		h += t / 3600;
		t = t % 3600;
	}
	if (t >= 60) {
		m += t / 60;
		t = t % 60;
	}

	s += t;

	if (s >= 60) {
		m += s / 60;
		if (s == 60) { s = 0; }
		else s = s % 60;
	}

	if (m >= 60) {
		h += m / 60;
		if (m == 60) { m = 0; }
		else m = m % 60;
	}

	if (h >= 24) {
		if (h == 24) { h = 0; }
		else h = h % 24;
	}

	//if (h >= 3600) {
	//	h += h / 3600;
	//	if (h == 60) { h = 0; }
	//	else h = h % 60;
	//	
	//}
}

void solve() {
	input();
	solution();

	cout << h << " " << m << " " << s;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;

}