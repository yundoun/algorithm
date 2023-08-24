#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	string str;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> str;
		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j < n; j++) {
				cout << str[i];
			}
		}
		cout << endl;
	}

	return 0;

}

