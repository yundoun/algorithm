function solution(a, b) {
    
    var A = a.toString() + b.toString();
    let B = b.toString() + a.toString();
    
    console.log(A)
    
     return (Number(A) >= Number(B) ) ? Number(A) : Number(B);  
    
    
}