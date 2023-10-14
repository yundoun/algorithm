function solution(arr, queries) {

    for (let i =0; i< queries.length; i++){
        let a = queries[i][0];
        let b = queries[i][1];
        
        for (let j=a; j<b+1; j++){
            if (j % queries[i][2] ===0 || j === 0 )
                [arr[j]] = [arr[j]+1]
        }

    }
    return arr;
}