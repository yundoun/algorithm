#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max = *max_element(sides.begin(), sides.end());
      int min = *min_element(sides.begin(), sides.end());
    
    for (int i =1; i <= 10000000; i++){ // 배열에 없는 변이 가장 클 때
        if (i >= max && i < (sides[0] + sides[1] )) answer++;
    }
    
    for (int i =1; i<max; i++){
        if ( max < i+min && i <= max ) answer++;
    }
    
    
    return answer;
}