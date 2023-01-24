function solution(denum1, num1, denum2, num2) {
    var denum = denum1 * num2 + denum2*num1;
    var num = num1*num2;
    
    function getGCD(num1, num2){
        let gcd = 1;
        for (let i=2; i<=Math.min(num1, num2); i++){
            if(num1 % i === 0 && num2 %i === 0){
                gcd = i;
            }
        }
        return gcd;
    }
    const gcd = getGCD(denum, num)
    return [denum/gcd, num/gcd]
}