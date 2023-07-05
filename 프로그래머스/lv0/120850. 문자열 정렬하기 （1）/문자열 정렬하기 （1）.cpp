#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for (int i=0; i<my_string.size(); i++){
        if ( isdigit(my_string[i])  ){
            answer.push_back(stoi((my_string.substr(i, 1))));
        }
    }
    // stoi() : string -> int로 바꾸는 함수
    // isdigit() : 문자열이 정수로 변환할 수 있으면 True 반환 ( 숫자 판단 함수 )
    // substr() : 부분 문자열 추출, 원래 문자열에서 [pos, pos + count) 까지의 문자열을 반환한다.
    
    sort(answer.begin(), answer.end());
    
    return answer;
}