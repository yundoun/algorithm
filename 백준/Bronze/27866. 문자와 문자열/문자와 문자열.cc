#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	int i;

	cin >> S;
	cin >> i;

	cout << S[i-1];

	return 0;

}

