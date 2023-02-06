function solution(money) {
    
    let count, remain = 0;
    count = parseInt(money / 5500);
    remain = money % 5500;
    let change = [count, remain];
    return change;
}