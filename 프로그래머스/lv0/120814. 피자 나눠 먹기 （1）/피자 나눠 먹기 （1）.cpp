#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    (n <= 7) ? answer = 1 : (n%7 == 0) ? answer = n/7 : answer = n/7 + 1;
    return answer;
}