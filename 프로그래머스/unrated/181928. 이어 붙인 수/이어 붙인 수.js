function solution(num_list) {

    let fun1 = num_list.filter(el=>(el%2 !== 0));
    let fun2 = num_list.filter(el=>(el%2 === 0));
    return Number(fun1.join('')) + Number(fun2.join(''));
}