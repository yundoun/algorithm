#include <iostream>
using namespace std;

int main() {

	int A = 0, B = 0, V = 0, answer=0;

	cin >> A;
	cin >> B;
	cin >> V;

	answer = (V - A) / (A - B)+1;

	if ((V - A) % (A - B) == 0) {
		cout << answer;
	}
	else
		cout << answer+1 ;


}