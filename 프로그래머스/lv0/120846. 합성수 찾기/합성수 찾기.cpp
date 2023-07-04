#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0; // 합성수의 개수
    
    for (int i=4; i<=n; i++){
        int num = 0; // 약수의 개수
        for (int j=1; j<=i; j++){
            if (i%j == 0) num++;
            if (num >= 3) {answer++; num = 0; break;}
        }

    }
    
    return answer;
}