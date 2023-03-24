#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    
    int max=0 , max2 =0;
    int index = 0;
    
    for (int i=0; i<numbers.size(); i++){
        if (numbers[i] > max ){
            max = numbers[i];
            index = i;
        }
    }
    
    numbers[index] = 0;
    
    for (int i=0; i<numbers.size(); i++){
        if (numbers[i] >max2 ){
            max2 = numbers[i];
        }
    }
    
    return max * max2  ;
}


// 다른 사람들 풀이 : sort 함수를 사용하여 오름차순으로 정렬한 후 곱셈