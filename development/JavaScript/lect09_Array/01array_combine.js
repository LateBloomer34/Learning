let arr = [1,2,3,4, "him", true];
console.log(arr);
console.log(arr[0]);
console.log(arr[3]);
console.log(arr[5]);
console.log(arr[-1]);// return undefined

console.log(arr.at(-2));

// what is difference between index accesiing or at() method - we can access negative index afer apply at() method.

let arr2 = arr;
console.log(arr2);
console.log(arr2===arr);// coz both arr2 and arr has same memory location , in arr2 the reference of arr copied;
console.log(arr2===arr);
arr3 = [1,2,3,4, "him", true];
console.log(arr == arr3);
// arr3 store in new memory location


let a = [1,2,3,4,5,6,7];
let b = a.push(9);
console.log(a);
console.log(b);// it will return length of b

// if we want to print updated b , we can use spread opreator ot concat method;


let c = [0,1,2,3,4];
let d = c.concat(5);
console.log(c);
console.log(d);


// or we can use spread operator


let e = [5,4,3,2,1];
let f = [...e, 6];
console.log(e);
console.log("f",f);

 f.pop();
console.log("print",  f);

let m = [1,2,3,4];
let n = [4,5,6,7];
let k = m.concat (n);
console.log(k);
