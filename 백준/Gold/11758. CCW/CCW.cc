#include <iostream>
#include <algorithm>
using	namespace std;

struct Point {
private:
public:
    int x;
    int y;
};

Point p1, p2, p3;

int answer;

int CCW(int x1, int y1, int x2, int y2, int x3, int y3) {
	return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

void input() {
	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	cin >> p3.x >> p3.y;

}

void solution() {
	int result = CCW(p1.x, p1.y, p2.x, p2.y, p3.x, p3.y);

	if (result == 0) answer = 0;
	else if (result > 0) answer = 1;
	else answer = -1;
}

void solve() {
	input();
	solution();
	cout << answer << endl;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	solve();

	return 0;

}