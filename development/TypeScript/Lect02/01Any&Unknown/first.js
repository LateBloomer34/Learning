"use strict";
// If we don’t specify a variable’s type, TypeScript automatically determine the type from its first assigned value.
Object.defineProperty(exports, "__esModule", { value: true });
let a = 10;
console.log(typeof a);
let b = "himanshu";
console.log(b);
let c;
// we we declear a varibale without any value, we can assign any value with any datatype in future
// how to declear a varibale in which we can store or update value with random datatype
// this method is  called implicit 
let a1 = 20;
// now we can update a1 varibale with any datatype value;
a1 = 30;
console.log(a1);
a1 = "hi";
console.log(a1);
let a2 = 56;
console.log(a2);
a2 = "hello";
console.log(a2);
a2 = true;
console.log(a2);
// what is the difference between unknown and any - 
// we can not apply method in unknown directly,
a2 = "he ";
console.log(a2.toUpperCase());
let a3 = "ananya";
//  console.log(a1.toUpperCase()); // not working directly in case of unknown datatype, to overcome it we need to verify its datatype first.
if (typeof a3 === "string") {
    console.log(a3.toUpperCase());
}
else {
    console.log("bro type galat h");
}
//but in case of any datatype, we can directly convert into uppercase, or we can apply method on it.
let a4 = "a4";
console.log(a4.toUpperCase());
// avoid any for better XPathResult, code will not break
