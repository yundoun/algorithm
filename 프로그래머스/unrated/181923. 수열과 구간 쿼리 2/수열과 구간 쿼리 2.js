function solution(arr, queries) {
    let answer = [];
    for (let i=0; i<queries.length; i++){
        let tmp = 1000000;
        let min = queries[i][0];
        let max = queries[i][1];
        
        for (let j =min; j<max+1; j++){
            if (arr[j] > queries[i][2] && arr[j] < tmp){
                tmp = arr[j];
            }   
        }
        if (tmp === 1000000){
            answer.push(-1);
        }
        else
            answer.push(tmp);
        
    }
    return answer;
}