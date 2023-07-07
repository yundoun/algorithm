#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    sort(array.begin(), array.end());
    
    if (array.size() == 1 ) return array[0];
    if ( n < array.front() ) answer = array.front();
    if (array.back() < n ) answer = array.back();
    
    for (int i =0; i<=array.size(); i++){
        if ( n < array[i]) {
            return (array[i]-n == n - array[i-1]) ? array[i-1] : (array[i]-n > n - array[i-1]) ? array[i-1] : array[i];
                
        }
    }
    
    
    return answer;
}