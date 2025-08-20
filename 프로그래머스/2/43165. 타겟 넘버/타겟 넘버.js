

function solution(numbers, target) {
    var count = 0;
    
    function dfs (idx, sum){
        
        if (idx === numbers.length){
            if (sum === target ) {
                count++ // 합이 target이면 카운트 증가        
            }
            return count;
        }
        dfs(idx + 1, sum + numbers[idx] )
        dfs(idx + 1, sum - numbers[idx])
    }
    
    dfs(0,0)
    
    return count;
}