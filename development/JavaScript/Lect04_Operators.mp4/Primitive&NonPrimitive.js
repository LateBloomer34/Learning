/* 
Primitive - sinngle value , we can not modify that value , 
ex -  number , string , boolean  , undefined , null , BigInt , symbol


Non Primitive - hold collections of values or more intricate entities, we can modify that value of non primitive 
Ex - Array , object, function


Array - we  can store multiple values inside the array.

*/

let n = [1,2,3,4,5,6, "himanshu"];
console.log(n);
console.log(typeof n);
console.log(n[1]);
console.log(typeof n[1]);
console.log(n[6]);
console.log(typeof n[6]);

let obj = {
    names :"himanshu",
    clas: "first",
    age:24
}

let { names , clas , age } = obj;
console.log(names);
console.log(clas);
console.log(age);


//Function

let fun = function (){
    console.log("function 1")
};
fun();

function fun2 (){
    console.log("function 2");
    
}
fun2();

let fun3 = ()=>(
    console.log("function 3"),
    console.log("fun3") 
)
fun3();

console.log(typeof fun);
console.log(typeof fun2);
console.log(typeof fun3);

