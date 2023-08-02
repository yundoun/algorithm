#include <iostream>
#include <string>

using namespace std;

string str;
string str2 = "";

int ary[27] = {0,};

void input() {
	cin >> str;
}

void solution() {
	// 모두 소문자로 바꾸기
	for (int i = 0; i < str.size(); i++) { 
		str2 += tolower(str[i]);
	} 

	// 아스키 코드표를 참조하여 알파벳을 0부터 25까지 표현
	for (int i = 0; i < str2.size(); i++) {
		int index = str2[i] - 97;
		ary[index]++;
	}

	int max = 0;
	int index = 0;
	int cnt=0;

	for (int i = 0; i < 26; i++) {
		if (ary[i] > max) { 
			max = ary[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (ary[i] == max)cnt++;
	}

	if (cnt > 1) cout << "?";
	else cout << char(index + 65);

}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input();
	solution();

}


