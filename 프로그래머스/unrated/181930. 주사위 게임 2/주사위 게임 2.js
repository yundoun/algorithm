function solution(a, b, c) {
    var answer = 0;
    
    if ( a === b && b === c) 
        return (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b* b*b + c*c*c)
    else if ( a === b || a===c || b === c)
        return (a+b+c) * (a*a + b*b + c*c)
    else
        return a+b+c;
}