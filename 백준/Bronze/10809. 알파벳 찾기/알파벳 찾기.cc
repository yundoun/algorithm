#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>

using	namespace std;

string str;


vector<int> ary;

void input() {

	cin >> str;

}

void solution() {

	for (int i = 0; i < 26; i++) {
		
		int index = 0;
		
		index = str.find('a' + i);

		cout << index << " ";
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