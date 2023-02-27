#include <iostream>
using namespace std;

int main() {
	int A;
	char B[4];

	cin >> A; // A 입력 받기
	cin >> B;

	cout << A * (B[2]-'0') << endl;
	cout << A * (B[1]-'0') << endl;
	cout << A * (B[0]-'0') << endl;
	cout << A * atoi(B) << endl;
}