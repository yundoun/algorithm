#include <string>
#include <bitset>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";

    // 문자열을 이진수로 바꾸고
    bitset<32> num1(bin1);
    bitset<32> num2(bin2);
    
    // 이진수의 합을 sum에 저장
    bitset<32> sum = num1.to_ulong() + num2.to_ulong();
    
    // 문자열로 변환
    answer = sum.to_string();

    // 0 지우기
    answer.erase(0, answer.find_first_not_of('0'));

    if (answer[0] == NULL) answer+='0';
    
    return answer;
}