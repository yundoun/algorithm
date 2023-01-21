function solution(n) {
    let peice=1;
    
    while(true){
        if ((n*peice)%6==0){ break; return n*peice;}
        peice++;
    }
    return (n*peice)/6;
}