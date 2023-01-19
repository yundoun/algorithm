function solution(n) {
    let array =[];
    for (let i=1; i<n+1; i++){
        array.push(i)
    }
    
    let answer = array.filter(array => array%2==1);
    
    
    return answer;
}