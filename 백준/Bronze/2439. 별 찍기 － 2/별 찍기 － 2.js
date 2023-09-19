const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .replaceAll("\r", "")
  .trim()
  .split("\n");

const n = Number(input[0])
    
answer = ""
blank = ""

for (let i = 1; i <= n; i++) {
  answer += "*";
  for (let j = 1; j <= n - i; j++) {
    blank += " ";
  }
  console.log(blank + answer);
  blank = "";
}

    