// datatype 


// number
let a :number = 16;
console.log(a);


// string

let str: string = "him";
console.log(str);
console.log(typeof str);


// boolean

let isPresent: boolean = true;
console.log(isPresent);


//bigInt

let bigNum: bigint = 4562n
console.log(bigNum);


//null

let abc :null = null;
console.log(abc);


//undefined


let ab: undefined = undefined;
console.log(ab);

// ab = 10;
// console.log(ab); // error TS2322: Type '10' is not assignable to type 'undefined'.


// bigInt

let c:bigint = 4536n;
console.log(c);


//unknown


let a6:unknown = "himanshu";
console.log(a6);
if(typeof a6 === "string"){
console.log(a6.toUpperCase())};
// in unknown we can not apply methods directlt , first we want to confirm its type, it is a good practice and widely used .


// any
let b :any = "him";
console.log(b);
console.log(b.toUpperCase());


// We can declare a variable without specifying its type, but we cannot reassign its value to another data type. It takes the data type of its first assigned value as the default data type.


