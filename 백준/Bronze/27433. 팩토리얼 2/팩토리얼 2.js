const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs
  .readFileSync(filePath)
  .toString()
  .replaceAll("\r", "")
  .trim()
  .split("\n");

  const n = Number(input[0])
  let sum = 1;

  for (let i=0; i<n; i++){
    sum = sum * (n-i)
  }

  console.log(sum)


