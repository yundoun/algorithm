#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int T;
char c;


void input() {
	float n;
	string  str;

	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {

		getline(cin, str);
		stringstream stream;
		stream.str(str);

		stream >> n;

		while (stream >> c) {
			if (c == '@') {
				n *= 3;
			}
			else if (c == '%') {
				n += 5;
			}
			else
				n -= 7;
		}

		cout << fixed;
		cout.precision(2);

		cout << float(n) <<'\n';
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

