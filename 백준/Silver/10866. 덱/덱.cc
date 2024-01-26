#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
using	namespace std;

deque<int>dq;

int N;

void input() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		if (tmp == "push_back") {
			int tmp;
			cin >> tmp;
			dq.push_back(tmp);
		}
		else if (tmp == "push_front") {
			int tmp;
			cin >> tmp;
			dq.push_front(tmp);
		}
		else if (tmp == "front") {
			if (dq.empty()) cout << -1 << "\n";
			else cout << dq.front() << "\n";
		}
		else if (tmp == "back") {
			if (dq.empty()) cout << -1 << "\n";
			else cout << dq.back() << "\n";
		}
		else if (tmp == "size") {
			cout << dq.size() << "\n";
		}
		else if (tmp == "empty") {
			if (dq.empty()) {
				cout << 1 << "\n";
			}
			else cout << 0 << "\n";
		}
		else if (tmp == "pop_front") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (tmp == "pop_back") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
	}
}

void solution() {

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input();
	solution();

	return 0;

}