const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .replaceAll("\r", "")
  .trim()
  .split("\n");

const n = Number(input[0])
    
    for (let i = 1; i <= n; i++) {
  for (let j = 0; j <= n - i; j++) {
    process.stdout.write("*");
  }
  console.log("");
}