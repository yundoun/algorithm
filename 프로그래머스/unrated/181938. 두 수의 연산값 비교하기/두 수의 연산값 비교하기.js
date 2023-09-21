function solution(a, b) {
    var answer = 0;
    
    let A = a.toString() + b.toString();
    let B = 2 * a * b;
    
    return ( Number(A) >= B) ? Number(A) : B ;
}