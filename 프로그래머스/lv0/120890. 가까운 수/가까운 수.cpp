#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = 101;
    int e;
    
    sort(array.begin(), array.end());
    
    for (int i =0; i<array.size(); i++ ){
        e = array[i];
        if (min > abs(n - e)){
            min = abs(n - e);
            answer  = e;
        }
        if (min < abs(n-e) ) break;
        
        
    }
    return answer;
}