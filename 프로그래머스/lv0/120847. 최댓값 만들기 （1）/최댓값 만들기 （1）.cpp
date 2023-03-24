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