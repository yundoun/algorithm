#include <string>
#include <vector>

using namespace std;

int fac(int n){
    if (n <= 1) return 1;
    return n*fac(n-1);
}

int solution(int n) {
    int answer = 1;
    unsigned long long tmp = 1;
    
    for (int i=0; i<=n; i++){
        tmp = fac(i);
        
        if (tmp == n) {
            answer = i;
        }
        
        else if (n < tmp ){
                answer = i-1;
                break;
        }
    }
    return answer;
}