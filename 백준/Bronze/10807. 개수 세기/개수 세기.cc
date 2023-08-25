#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, V,ans=0;
	int ary[101];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> ary[i];
	}

	cin >> V;

	for (int i = 0; i < N; i++) {
		if (ary[i] == V) ans++;
	}

	cout << ans;

	return 0;

}

