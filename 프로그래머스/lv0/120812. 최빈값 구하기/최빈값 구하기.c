#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int count[1001] = {0, };
    int max = 0; // 나온 횟수
    int mode = 0; // 최빈값
    int cnt = 0; // 최빈값이 몇 개인지 확인
       
    for (int i=0; i<array_len; i++)
    {
        count[array[i]]++;
    }
    for (int i=0; i<1001; i++){
        if(count[i] > max ){
            max = count[i];
            
            mode = i;
        }
    }
    
    for (int i= 0; i<1001; i++){
        if (count[i] == max) cnt++;
    }
    
    if (cnt>1) return -1;
    else return mode;
}