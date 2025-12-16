"use strict";
// creation of function in TS
Object.defineProperty(exports, "__esModule", { value: true });
function greet(num) {
    console.log("i am greet function", num, "times");
    return 10;
}
greet("indicating");
// if there is no return type
function fun() {
    console.log("i am a function which return nothing ");
}
fun();
// crete a function with default parameter
function gun(number = "10") {
    console.log(number);
}
gun();
gun("himans");
// default parament work only if no parameter pass as an argument;
// optional parameter
function gate(person) {
    console.log(person || "sonu");
}
gate("hemu");
gate();
// arrow function using TS
let a = (name) => {
    console.log("i am a", name);
    return 10;
};
console.log(a("sanju"));
// callback function
// a function pass as an argument inside other function is called callback function.
// method 1 - recommended // use a function type - best practice
function gun1(cb) {
    console.log(cb());
}
// method 2 - not recommended
// function gun1(cb:Function):void{
//     console.log("gun1");
//     console.log(cb());
// }
gun1(function cb() {
    return "him";
});
// example 2 of callback function
function main(cb) {
    console.log(cb(10));
}
main(function cb() {
    return num;
});
