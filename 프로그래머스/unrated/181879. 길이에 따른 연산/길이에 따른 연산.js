function solution(num_list) {
    console.log(num_list.length)
    return (num_list.length >= 11) ? num_list.reduce((sum, cv) => sum+cv , 0) : num_list.reduce((mul, cv) => mul*cv,1); 
}