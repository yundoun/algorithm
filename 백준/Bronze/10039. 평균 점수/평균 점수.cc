#include <iostream>
using namespace std;

int main() {
	
	int answer = 0;
	int array[5];

	for (int i = 0; i < 5; i++) {
		cin >> array[i];
		if (array[i] < 40) array[i] = 40;
	}

	for (int i = 0; i < 5; i++) {
		answer += array[i];
	}
	cout << answer / 5;
}