function solution(a, d, included) {
    let ans = 0;
    let tmp = a;
    for (let i =0; i<included.length; i++) {
        (i === 0 ) ? tmp = a : tmp += d;
        if (included[i] === true) ans += tmp;
    }
    return ans;
}