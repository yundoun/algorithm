function solution(arr, queries) {
    
    for (let i =0; i<queries.length; i++){
        let a = queries[i][0];
        let b = queries[i][1];
        
        [arr[a], arr[b]] = [arr[b], arr[a]];
    }
    
    return arr;  
}