function solution(n) {
    var answer = 0;
    for (let i=0; i<n+1; i++){
        if (i%2 === 0){
            answer+=i;
        }
    }
    return answer;
}