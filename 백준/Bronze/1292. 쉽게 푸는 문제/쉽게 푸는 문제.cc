#include <iostream>
using namespace std;

int main() {

	int array[1001] = { 0 };
	int a, b, k =1;
	int answer = 0;
	
	cin >> a >> b;

	for (int i = 1; i <= 1000; i++) {
		
		for (int j = 1; j <= i; j++) {
			array[k] = i;
			k++;
			if (k > 1000) break;
		}
		if (k > 1000) break;
	}

	for (int i = a; i <= b; i++) {
		answer += array[i];
	}


	cout << answer;

}