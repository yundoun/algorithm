#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, answer=0;
	string str;

	cin >> N;
	cin >> str;

	for (int i = 0; i < N; i++) {
		answer += stoi(to_string(str[i]))-'0';
	}
	cout << answer;
	return 0;

}

