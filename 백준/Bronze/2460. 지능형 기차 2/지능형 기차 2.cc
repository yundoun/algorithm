#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int IN = 0, OUT = 0, ans = 0;
	vector<int>answer;

	for (int i = 0; i < 10; i++) {
		cin >> OUT >> IN;
		ans = (ans - OUT) + IN;
		answer.push_back(ans);
	}

	cout << *max_element(answer.begin(), answer.end());

}