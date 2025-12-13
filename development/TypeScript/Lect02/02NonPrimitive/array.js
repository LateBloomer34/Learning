"use strict";
// let a:unknown = "himanshu";
// console.log(a);
// if(typeof a === "string"){
// console.log(a.toUpperCase())};
// // in unknown we can not apply methods directlt , first we want to confirm its type, it is a good practice and widely used .
Object.defineProperty(exports, "__esModule", { value: true });
// let b :any = "him";
// console.log(b);
// console.log(b.toUpperCase());
// Non Primitive
//number type array 
let arr = [1, 2, 3, 4];
console.log(arr);
let arr1 = [1, 2, 6, 5]; // type is number hover on array name, it shows the type of array
// mixed array
let arr22 = [1, 2, 3, "him", true];
console.log(arr22);
// declere type of data here // | sign is union
let arr2 = [1, 2, 3, "hi", true]; // array is mixed type , number and string present here , no need to write type , it automaticcaly identify it is a mxed type
console.log(arr2);
arr2.push(false);
console.log(arr2);
// tuples - it is a array with a fixed number of elements of specific types.
let tup = ["him", 2];
console.log(tup);
// if we have 10 element , always mention the type of data of every element, otherwise it throw error
// k = 26; // it will throw error coz in ts without let var const we can not declear any variable. 
// ts is a compiled langugae , coz it will throw error in the compiled time.
// basically it uses a  transpiller(fansy name of compiler in TS) for convert into JS code.
// js is a interpreted JIT(just in time ) language .
// compiled language -> source code goes to - compiler (machine code goes to)- cpu;
// compiler convert into machine code - 
// compiler convert into binary ConvolverNode
// interpreted language - source code - cpu (direcly goes to CPU) interprator convert into binary(machine code) and executed by CPU.
// platemform dependent and plateform independent language -  
// plateform dependent -   generate code acording to device -  for windows diff machine code , for mac diff machine code
let tuple = ["2", 25];
console.log(tuple);
