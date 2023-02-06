function solution(my_string, n) {
    var tmp = my_string.split('');
    var answer = [];
    for (let i = 0; i<tmp.length; i++){
        for (let j = 0; j<n; j++)
            answer.push(tmp[i]);
    }
    
    return answer.join('');
}