function solution(n, control) {
    
    // for (let i=0; i<control.length; i++){
    //     if (control[i] == "w"){
    //         n += 1;
    //     }
    //     else if (control[i] == "s"){
    //         n -= 1;
    //     }
    //     else if (control[i] == "d"){
    //         n += 10;
    //     }
    //     else{
    //         n -= 10;
    //     }
    // }
    
    return [...control].reduce((cur, word)=>{
        if (word === "w"){
            cur += 1;
        }
        else if (word === "s"){
            cur -= 1;
        }
        else if (word === "d"){
            cur += 10;
        }
        else{
            cur -= 10;
        }
        return cur
    },n);
}