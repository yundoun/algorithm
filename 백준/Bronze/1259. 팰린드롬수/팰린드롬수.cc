#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using	namespace std;

string n = "";
string ans = "";

void input() {
	
	while (n != "0")
	{
		cin >> n;

		for (int i = n.size() -1; i >=0; i--) {
			ans += n[i];
		}
		

		if (n == "0") return ;
		
		else if (n == ans) {
			cout << "yes" << endl;
			ans = "";
		}
		else 
		{
			cout << "no" << endl;
			ans = "";
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