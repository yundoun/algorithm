const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let input = [];

rl.on('line', function (line) {
  input = [line];
}).on('close', function () {
  str = input[0];
  ans = "";
  for (let i = 0; i < str.length; i++) {
    // 대문자일 경우
    if (str[i] === str[i].toUpperCase()) {
      ans += str[i].toLowerCase();
    }

    // 소문자일 경우
    else {
      ans += str[i].toUpperCase();
    }

  }
    
    console.log(ans)

});