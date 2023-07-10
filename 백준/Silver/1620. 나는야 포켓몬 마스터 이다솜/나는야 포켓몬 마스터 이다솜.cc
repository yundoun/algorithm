#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    map<string, int> poketmonMap;

    vector<string> name;
    vector<string> result;

    int N, M;

    cin.tie(0);
    ios::sync_with_stdio(0);

    string input; // 이름 또는 번호로 입력받는다 
    cin >> N >> M;  // 포켓몬의 개수 N, 맞춰야할 문제의 개수 M

    
    for (int i = 1; i <= N; i++) {
        cin >> input;
        name.push_back(input); // 번호로 찾기 위한 배열
        poketmonMap.insert(make_pair(input, i)); // 포켓몬 이름으로 번호 찾기
    }
    for (int i = 0; i < M; i++) {
        cin >> input;
        // 1. 이름이 주어진 경우
        if (input[0] >= 65 && input[0] <= 90) { 
            result.push_back(to_string(poketmonMap[input]));
        }
        // 2. 번호가 주어진 경우
        else 
        {
            result.push_back(name[stoi(input) - 1]);  // 배열 인덱스는 0부터 시작
            // 문자로 입력받았기 때문에 Int로 변환
            
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n'; // 출력
    }
    return 0;
}
