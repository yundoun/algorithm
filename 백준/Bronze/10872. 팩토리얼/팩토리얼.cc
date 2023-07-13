#include <iostream>
using namespace std;

int main() {

	int N;
	long long answer = 1;
	cin >> N;

	if (N == 0) answer = 1;
	
	for (int i = 1; i <= N; i++) {
		answer *= i;
	}

	cout << answer;
}