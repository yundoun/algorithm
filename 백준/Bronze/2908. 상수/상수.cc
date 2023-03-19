#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {


	string n1, n2;

	cin >> n1 >> n2;

	reverse(begin(n1), end(n1));
	reverse(begin(n2), end(n2));

	if (stoi(n1) > stoi(n2)) {
		cout << n1;
	}
	else
		cout << n2;
}