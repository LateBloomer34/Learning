function greet(callback){
    console.log("fetching the user details");
    setTimeout(()=>{
        console.log("data fatched successfully");
        let obj = {name:" rohit", age:16}
        callback(obj);
    } , 2000)
}
function fun(obj){
    console.log(`edit ${obj.name} of the user`);
}
greet(fun);
function gun(obj){
    console.log(`edit ${obj.age} of the user`);
}
greet(gun);