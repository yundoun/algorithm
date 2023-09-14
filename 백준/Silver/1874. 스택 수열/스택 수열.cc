#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

stack <int> st;

int N;
string answer = "";



void input() {
	

	int m = 0; // 스택의 초기값 
	// 젤 처음 스택의 값이 없을 경우 st.top()을 비교할 수 없기에 초기값을 대입해준다.

	bool check = true;  //  입력한 값과 스택의 top이 같을 경우 true


	cin >> N;

	st.push(m);
    m++;
    
	for (int i = 0; i < N; i++) {

		int x;
		cin >> x;

		// 1. push를 하는 경우
		while (st.top() < x) {  // top이 x와 같아질때까지 push
			st.push(m);
			m++;
			answer += "+";
		}

		// 2. pop을 하는 경우
		if (st.top() == x) {
			st.pop();
			answer += "-";
		}

		// 3. 안되는 경우
		else {
				check = false;
			
		}
	}
	
	if (check != true) {   // 3. top보다 입력한 값이 작을 경우 NO 출력
		cout << "NO" << "\n";
		return;
	}

	else {  // 정답일 경우 출력
		for (auto x : answer) {
			cout << x << "\n";
		}
	}

}

void solution() {
	
	
	

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