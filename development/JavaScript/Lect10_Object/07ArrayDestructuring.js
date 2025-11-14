let arr = [1,2,3,4,5,6];

// basic destructuring

const [a,b,c, ...resta] = arr;
console.log(a);
console.log(b);
console.log(c);

console.log(resta);


// skiping element

const [s, , d] = arr;
console.log(s);
console.log(d);

const arr1 = ["apple"];
const[fruit = "banana" , color = "yellow"] = arr1;

console.log(fruit);
console.log(color);
console.log(arr1);


// swaping variable usng destructuring


let a1 = 5;
let a2 = 6;
[a1, a2] = [a2,a1];

console.log(a1);
console.log(a2);


// nested array destructuring

let arr3 = [1,[2,3]];
const [l,[m,n]] = arr3;

console.log(l);
console.log(m);
console.log(n);









