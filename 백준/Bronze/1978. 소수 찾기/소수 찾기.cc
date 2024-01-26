#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using	namespace std;

int N, cnt = 0;
int ary[101];

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ary[i];
	}
}

bool solution(int number) {
	
	if (number <= 1) return false;
	if (number == 2)return true;
	if (number % 2 == 0)return false;

	for (int i = 3; i <= sqrt(number); i+=2) {
		if (number % i == 0) return false;
	}
	
	return true;
};

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input();

	for (int i = 0; i < N; i++) {
		if (solution(ary[i])) cnt++;
	}

	cout << cnt;
	return 0;

}