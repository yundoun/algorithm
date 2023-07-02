#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    vector<int> answer;
    int tmp = 1;
    
    for (int i=0; i< k-1; i++){
        tmp = tmp + 2;
        if (tmp > numbers.size()){
            tmp = tmp - numbers.size();
        }
    }
    return tmp;
    }
        
    
  