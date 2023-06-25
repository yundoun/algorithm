#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
   
    answer.push_back(money/5500); // 커피 수
    answer.push_back(money - (money/5500 * 5500)); // 남는 돈
    
    return answer;
}