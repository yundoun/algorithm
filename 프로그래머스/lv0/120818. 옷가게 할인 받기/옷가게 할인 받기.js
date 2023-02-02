function solution(price) {
    var amount = 0;
    
    if (price >= 500000){
        amount = price - (price*0.2)
    }
    else if (price >= 300000){
        amount = price - (price*0.1)
    }
    else if (price >= 100000){
        amount = price - (price*0.05)
    }
    else 
        amount = price;
    
    return Math.floor(amount);
}