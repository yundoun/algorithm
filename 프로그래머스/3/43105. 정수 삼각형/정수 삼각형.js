// function solution(triangle) {
//     var answer = 0;
    
//     // 2차원 배열의 마지막 원소부터 위 탐색 -> 하나의 레벨
//     for (let i = triangle.length - 2; i >= 0; i--){
//         // 찾아야하는 레벨의 한 단계 위 레벨만큼 탐색 
//         for (let j = 0; j < triangle[i].length; j++){
//             triangle[i][j] += Math.max(triangle[i+1][j], triangle[i+1][j+1])
//         }
//     }
    
//     return triangle[0][0];
// }

// 아주 약간의 최적화를 시도해본 코드
function solution(triangle) {
    const n = triangle.length; // 길이를 변수에 미리 저장
    for (let i = n - 2; i >= 0; i--){
        for (let j = 0; j < triangle[i].length; j++){
            triangle[i][j] += Math.max(triangle[i+1][j], triangle[i+1][j+1]);
        }
    }
    return triangle[0][0];
}