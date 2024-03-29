#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    vector<string> v ={"zero", "one", "two", "three", "four",
                   "five", "six", "seven", "eight", "nine"};

    
    while (numbers.size() != 0){
        for (int i =0; i<v.size(); i++){
            if (numbers.substr(0, v[i].size()) == v[i]) {
                answer = answer*10+i;
                numbers = numbers.substr(v[i].size());
            }
        }
    }
    
    return answer;
}