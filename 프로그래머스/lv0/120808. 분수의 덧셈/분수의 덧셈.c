#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    
    int numer = numer1*denom2 + numer2*denom1;
    int denom = denom1*denom2;
    int getGcd = gcd(numer, denom);
    
    answer[0] = numer/getGcd;
    answer[1] = denom/getGcd;
    return answer;
}