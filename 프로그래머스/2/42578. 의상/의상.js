function solution(clothes) {
    let hash = new Map();
    let answer = 1 ;
    
    for (let [name, type] of clothes){
        hash.set(type, (hash.get(type)||0) + 1)
    }
    
    for (let [key, value] of hash){
        answer = answer * (value+1)
    }
    
    return answer-1;
}



// {
//     headgear : 2,
//     eyewear : 1
// }