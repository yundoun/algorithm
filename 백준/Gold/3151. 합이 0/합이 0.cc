#include <iostream>
#include <algorithm>
#include <algorithm>
using	namespace std;

int N = 0;
int student[10001];

void input() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> student[i];
	}

	sort(student, student + N); // lower_bound를 사용하기 위해 오름차순 정렬

}

void solution() {

	long long ans = 0;
	int sum;
	int upper, lower;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			sum = student[i] + student[j];
			upper = upper_bound(student + (j + 1), student + N, sum * -1) -student;
			lower = lower_bound(student + (j + 1), student + N, sum * -1) -student;
			ans = ans + upper - lower;
		}
	}
	// lower_bound
	// 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
	cout << ans;
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