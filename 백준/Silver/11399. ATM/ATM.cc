#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using	namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, sum=0;
	cin >> N;
	vector<int>v(N, 0);
	vector<int>s(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	s[0] = v[0];

	for (int i = 1; i < N; i++) {
		s[i] = s[i - 1] + v[i];
	}

	for (int i = 0; i < N; i++) {
		sum += s[i];
	}

	cout << sum;

	return 0;

}