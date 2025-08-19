function solution(word) {
  let vowels = ["A","E","I","O","U"];
  let dict = [];
  
  function dfs(curr) {
    if (curr.length > 5) return;
    if (curr.length > 0) dict.push(curr); // 단어 등록
    
    for (let v of vowels) {
      dfs(curr + v);
    }
  }
  
  dfs("");
  
  return dict.indexOf(word) + 1; // index는 0부터니까 +1
}
