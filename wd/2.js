const fs = require("fs");
fs.readFile("dele.txt", "utf-8", (a, b)=>{
    console.log(a, b);
});
console.log("This is a message");