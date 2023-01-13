function solution(array) {
    array.sort((a,b) => a-b);
    return array[index = parseInt((array.length)/2)];
}