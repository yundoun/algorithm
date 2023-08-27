#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string A, B, ans = "1";
char op;
int cnt;

void input() {
	cin >> A;
	cin >> op;
	cin >> B;
}

int cnt_0(string str) {
	int tmp = 0;

	if (str.size() == 1) return 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '0') tmp++;
	}
	return tmp;
}

void solution() {
	if (op == '+') {

		if (A.size() > B.size()) {
			int tmp = A.size() - B.size();
			cout << A.replace(tmp, 1, "1");
		}
		else if ( B.size() > A.size() ) {
			int tmp = B.size() - A.size();
			cout << B.replace(tmp, 1, "1");
		}
		else {
			cout << "2";
			for (int i = 0; i < A.size() - 1; i++) {
				cout << "0";
			}
		}

		
	}

	else {
		int i = 0;
		cnt = cnt_0(A) + cnt_0(B);
		while (i < cnt) {
			ans += '0';
			i++;
		}
		cout << ans;
	}
}



int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input();
	solution();

	return 0;

}

