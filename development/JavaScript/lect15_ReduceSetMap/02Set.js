// set in JS is a collection of unique values, it store value without duplicate which makes it different from array 

// set can store nay value primitive or non primitive;

let arr = [1,2,1,2,1,2,1,3,5];
let setResult  =  new Set(arr);
console.log(setResult);


let set = new Set([1,2,3,1,4,2,3,1,2,5]);
console.log(set);

let set1 = new Set("anjali");
console.log(set1);
// it will return a object , means typw of set is object

let num = 111225632;
let resu = new Set(String(num));
console.log(resu);

resu.add(1);
console.log(resu);

resu.delete("3");
console.log(resu);
resu.delete(resu["2"]);
console.log(resu);



let a = [10,20,30,40,10];
let st = new Set (a);
console.log(st);

// delete 2st index element

// let newarr = Array.from(st);
let newarr = [...st];
console.log(newarr);
newarr.splice(2,1);
console.log(newarr);
let newSet = new Set(newarr);
console.log(newSet);





