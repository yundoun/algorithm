function solution(n) {
    let pizza = 7;
    if (n%7 === 0 ){return parseInt(n/7);}
    else {return parseInt(n/7) + 1;}
}