function solution(l, r) {
    let answer = [];
    
    for (let i =l; i<r+1; i++){
        let num = i.toString();
        let count = 0;
        for (let j = 0; j<num.length; j++){
            if (num.charAt(j) === "5" || num.charAt(j) === "0" ){
                count++;
            }
        }
        
        if (count === num.length) answer.push(i);
    }
    
    if (answer.length !== 0) return answer;
    else {
        answer.push(-1);
        return answer;
    }
    
}