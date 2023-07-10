#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for (int i=2; i<=n; i++){
        (i*i == n) ? answer = 1 : answer = 2;
        if (answer == 1) break;
    }
    return answer;
}