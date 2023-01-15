function solution(array) {
    let countary = new Array(1001).fill(0);
    console.log(countary)
    for (let i=0; i<array.length; i++){
        countary[array[i]]++; // array를 인덱스로 보기
    }
    
    let max = 0;  // 나온 횟수
    let mode = 0; // 최빈값
    
    let count = 0;  // 최빈값이 중복되는지 확인하는 변수
    
    console.log(countary);
    
    for (let i =0; i<countary.length; i++){
        if (max<countary[i]){
            max = countary[i];
            mode = i; 
        }
    }
    
    console.log('max = ' + max);
    console.log('mode = '+mode);
   
    for (let i =0; i<countary.length; i++){
        if (countary[i] == max) {count++}
    }
    
    console.log('count = '+count);
    if (count > 1 ){return -1}
    else return mode;
}