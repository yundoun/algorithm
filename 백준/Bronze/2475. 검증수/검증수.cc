#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, ans=0;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		ans += n * n;
	}

	cout << ans % 10 << endl;

	return 0;

}

