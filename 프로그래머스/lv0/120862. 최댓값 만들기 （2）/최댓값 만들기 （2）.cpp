#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    int a = numbers[0]*numbers[1];
    int b = numbers[numbers.size() -1] * numbers[numbers.size()-2];
    
    answer = max(a, b);
    return answer;
    
}