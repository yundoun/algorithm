function solution(num_list) {
    let mult = 1;
    let sum = 0;
    for (let i =0; i<num_list.length; i++){
        mult *= num_list[i];
        sum += num_list[i];
    }

    return (mult < sum**2) ? 1: 0;
    
}