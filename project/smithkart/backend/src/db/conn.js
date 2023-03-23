const mongoose =require("mongoose");
mongoose.connect("mongodb://localhost:27017/ApnaKart",{
    useNewUrlParser:true,
    useUnifiedTopology:true,
    // serverSelectionTimeoutMS: 5000 // optional
}).then(()=>{
    console.log(`connection successful`);
}).catch((e)=>{
    console.log(`no connection ${e}`);
});
