"use strict";
// datatype 
Object.defineProperty(exports, "__esModule", { value: true });
// number
let a = 16;
console.log(a);
// string
let str = "him";
console.log(str);
console.log(typeof str);
// boolean
let isPresent = true;
console.log(isPresent);
//bigInt
let bigNum = 4562n;
console.log(bigNum);
//null
let abc = null;
console.log(abc);
//undefined
let ab = undefined;
console.log(ab);
// ab = 10;
// console.log(ab); // error TS2322: Type '10' is not assignable to type 'undefined'.
// bigInt
let c = 4536n;
console.log(c);
//unknown
let a6 = "himanshu";
console.log(a6);
if (typeof a6 === "string") {
    console.log(a6.toUpperCase());
}
;
// in unknown we can not apply methods directlt , first we want to confirm its type, it is a good practice and widely used .
// any
let b = "him";
console.log(b);
console.log(b.toUpperCase());
// We can declare a variable without specifying its type, but we cannot reassign its value to another data type. It takes the data type of its first assigned value as the default data type.
