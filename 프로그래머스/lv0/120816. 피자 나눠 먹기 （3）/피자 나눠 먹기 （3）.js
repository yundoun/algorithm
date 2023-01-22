function solution(slice, n) {
    for (let i=1; i<101; i++){
        if (i>=n/slice){
            return i;
        }
    }
}