function solution(age) {
    let AGE = 0;
    if (age >=22){
        AGE = 2000-(age-23)
    }
    else
        AGE = 2022 - age +1
    return  AGE;
}