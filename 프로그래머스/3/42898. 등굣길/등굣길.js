function solution(m, n, puddles) {
    const MOD = 1000000007;

    let array = Array.from(Array(n), () => Array(m).fill(0));

    // 물웅덩이를 -1로 표시
    for (const puddle of puddles) {
        let x = puddle[0] - 1; // 열
        let y = puddle[1] - 1; // 행
        array[y][x] = -1; 
    }

    // 시작점이 물웅덩이인 경우 (문제 제약사항에 없지만, 안전하게)
    if (array[0][0] === -1) {
        return 0; 
    }
    array[0][0] = 1; // 시작점 경로 수는 1

    // 1. 첫 번째 행 채우기 (물웅덩이를 만나면 그 뒤는 모두 0)
    for (let j = 1; j < m; j++) {
        if (array[0][j] === -1) { // 현재 칸이 물웅덩이라면
            // 물웅덩이 뒤의 칸들은 0이 되어야 하므로
            // 이 칸 이후의 모든 칸은 접근 불가능 (0)
            for (let k = j; k < m; k++) {
                 if (array[0][k] !== -1) array[0][k] = 0; // 물웅덩이가 아닌 칸만 0으로 설정 (물웅덩이 마커 -1은 유지)
            }
            break; // 현재 행의 나머지 계산은 중단
        }
        // 위 칸이 물웅덩이(-1)가 아니고, 왼쪽 칸이 물웅덩이(-1)가 아니라면
        // 첫 번째 행은 왼쪽 칸에서만 올 수 있으므로
        if (array[0][j - 1] !== -1) {
             array[0][j] = array[0][j - 1];
        } else {
             array[0][j] = 0; // 왼쪽 칸이 물웅덩이면 현재 칸은 0
        }
    }

    // 2. 첫 번째 열 채우기 (물웅덩이를 만나면 그 뒤는 모두 0)
    for (let i = 1; i < n; i++) {
        if (array[i][0] === -1) { // 현재 칸이 물웅덩이라면
            // 물웅덩이 뒤의 칸들은 0이 되어야 하므로
            // 이 칸 이후의 모든 칸은 접근 불가능 (0)
            for (let k = i; k < n; k++) {
                 if (array[k][0] !== -1) array[k][0] = 0; // 물웅덩이가 아닌 칸만 0으로 설정
            }
            break; // 현재 열의 나머지 계산은 중단
        }
        // 왼쪽 칸이 물웅덩이(-1)가 아니고, 위 칸이 물웅덩이(-1)가 아니라면
        // 첫 번째 열은 위쪽 칸에서만 올 수 있으므로
        if (array[i - 1][0] !== -1) {
            array[i][0] = array[i - 1][0];
        } else {
            array[i][0] = 0; // 위쪽 칸이 물웅덩이면 현재 칸은 0
        }
    }
    

    // 3. 나머지 격자 채우기
    for (let i = 1; i < n; i++) { // 행 인덱스 (1부터 n-1까지)
        for (let j = 1; j < m; j++) { // 열 인덱스 (1부터 m-1까지)
            // 현재 칸이 물웅덩이라면 계산하지 않고 건너뜀
            if (array[i][j] === -1) {
                continue; 
            }

            let fromUp = 0;
            let fromLeft = 0;

            // 위쪽 칸이 물웅덩이가 아니라면 값을 가져옴
            if (array[i - 1][j] !== -1) {
                fromUp = array[i - 1][j];
            }
            // 왼쪽 칸이 물웅덩이가 아니라면 값을 가져옴
            if (array[i][j - 1] !== -1) {
                fromLeft = array[i][j - 1];
            }
            
            array[i][j] = (fromUp + fromLeft) % MOD;
        }
    }

    // 최종 결과 반환: 학교 위치 (n-1, m-1)의 경로 수
    // 학교가 물웅덩이라면 (값이 -1이면) 0을 반환
    if (array[n - 1][m - 1] === -1) {
        return 0;
    }
    return array[n - 1][m - 1];
}