function solution(n) {
    var answer = 0;
    
    if (n%2 == 0){ // 짝수 일때
        for (let i=1; i<=n; i++){
            if (i % 2 == 0) answer += i*i;
        }
    } else{
        for (let i=1; i<=n; i++){
            if (i % 2 != 0 ) answer += i;
        }
    }
    
    return answer;
}