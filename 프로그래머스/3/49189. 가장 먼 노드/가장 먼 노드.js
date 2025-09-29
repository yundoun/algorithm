function solution(n, edge) {
    var answer = 0;
    
    // 초기화
    const graph = Array.from({length : n + 1}, () => []);
    for (const [a, b] of edge){
        graph[a].push(b);
        graph[b].push(a);
    }
    
    // BFS 준비
    const distance = Array(n+1).fill(0);
    const visited = Array(n+1).fill(false);
    const que = [];
    que.push(1);
    visited[1] = true;
    
    while (que.length > 0){
        const current = que.shift();
        for (const neighbor of graph[current]){
            if (!visited[neighbor]) {
                visited[neighbor] = true; 
                distance[neighbor] = distance[current] + 1 // 이웃은 항상 거리가 + 1
                que.push(neighbor);
            } // 방문 안한 이웃
        }
    }
    
    const max = Math.max(...distance);
    for (const d of distance){
        if (d===max) answer++;
    }
    
    
    
    return answer;
}