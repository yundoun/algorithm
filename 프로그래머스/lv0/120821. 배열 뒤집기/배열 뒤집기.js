function solution(num_list) {
    var reverse = [];
    let count  = num_list.length
    
    for (let i=0; i<count; i++){
        let tmp = num_list.pop()
        reverse.push(tmp)
    }
    return reverse;
    // const solution = (num_list) => num_list.reverse
}