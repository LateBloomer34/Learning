
// creation of function in TS

function greet(num:string):number{ // :number indicate the return type
    console.log("i am greet function" , num , "times");
    return 10;
}

greet("indicating");

// if there is no return type


function fun ():void{
    console.log("i am a function which return nothing ")
}
fun()


// crete a function with default parameter


function gun (number :string = "10"){
console.log(number);
}
gun();
gun("himans")
// default parament work only if no parameter pass as an argument;


// optional parameter

function gate(person?:string){
    console.log(person || "sonu");
}
gate("hemu");
gate();


// arrow function using TS

let a = (name:string):number=> { 
console.log("i am a" , name);
return 10;
}
console.log(a("sanju"));

// callback function

// a function pass as an argument inside other function is called callback function.
// method 1 - recommended // use a function type - best practice
function gun1(cb:()=> string ):void{
    console.log(cb());
}

// method 2 - not recommended

// function gun1(cb:Function):void{
//     console.log("gun1");
//     console.log(cb());
// }


gun1(function cb():string {
    return "him";
})


// example 2 of callback function

function main(cb : (num:number)=> number):void{
    console.log(cb(100));
}
main(function cb(num){
    return num;
})

// function to find square of a number in typeScript 

function square(num:number):number{
    return num*num;
}

console.log(square(10));
console.log(square(4));
console.log(square(15));
console.log(square(16));


// function of square using callback function;

function result(sqr : (num:number)=>number):void{
    console.log(sqr(6));   
}

result(function sqr(num){
    return num*num;
})

// rest parameter;

function sumNum(a:number, b:number , ...c:number[]){
    let sum :number = 0;
    for (let key of c){
        // console.log(key);
        sum = sum+key;
    }
    console.log(sum);
    
}
sumNum(1,2,3,4,5,6,7,8);

// let arr:number[] = [1,2,3]