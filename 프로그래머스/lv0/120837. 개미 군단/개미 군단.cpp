#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    if (hp/5 >= 1) {
        answer += hp/5;
        hp = hp%5;
    }
    
    if (hp/3 >= 1){
        answer += hp/3;
        hp = hp%3;
    }
    answer += hp;
    
    return answer;  
}