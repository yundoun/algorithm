const fs = require("fs");

const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split('\n');

const [n] = input.shift().split(' ').map(Number)

 for (let i = 0; i < n; i++) {

   for (let j = 0; j < n - i - 1; j++) {
     process.stdout.write(" ");
   }
   for (let j = 0; j < (i * 2) + 1; j++) {
     process.stdout.write("*");
   }
   console.log("");
 }