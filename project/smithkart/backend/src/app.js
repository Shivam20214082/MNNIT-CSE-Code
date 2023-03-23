const express= require("express");
const app=express();
require("./db/conn");
const port=process.env.PORT || 3000;


app.get("/",(req,res)=>{
    res.send("hello from shivam")
});

app.listen(port, ()=>{
    console.log(`server is running at port no ${port}`);
})