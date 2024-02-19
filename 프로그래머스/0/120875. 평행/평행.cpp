#include <string>
#include <vector>
#include <cmath> // abs 함수를 사용하기 위해 추가

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    // 1 2 / 3 4
    if ( (dots[1][1] - dots[0][1]) != 0 && (dots[3][1] - dots[2][1]) != 0 &&
         (abs(dots[1][0] - dots[0][0]) * abs(dots[3][1] - dots[2][1])) == (abs(dots[3][0] - dots[2][0]) * abs(dots[1][1] - dots[0][1])) )
        answer++;
    // 1 3 / 2 4 
    else if ( (dots[2][1] - dots[0][1]) != 0 && (dots[3][1] - dots[1][1]) != 0 &&
              (abs(dots[2][0] - dots[0][0]) * abs(dots[3][1] - dots[1][1])) == (abs(dots[3][0] - dots[1][0]) * abs(dots[2][1] - dots[0][1])) )
        answer++;
    // 1 4 / 2 3
    else if ( (dots[3][1] - dots[0][1]) != 0 && (dots[2][1] - dots[1][1]) != 0 &&
              (abs(dots[3][0] - dots[0][0]) * abs(dots[2][1] - dots[1][1])) == (abs(dots[2][0] - dots[1][0]) * abs(dots[3][1] - dots[0][1])) )
        answer++;
    
    return (answer != 0) ? 1 : 0;
}
