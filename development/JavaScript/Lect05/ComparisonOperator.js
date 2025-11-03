/*
comparison operator
 == loose equality
 === strict equality

 < , > , <= , >= 

&& , || 
 & , |, ^ - bitwise operator , gives result in value not in true and false

<< -  left shift 
>> - right shift

*/

let a = 10;
let b = "hi";
console.log(a<=b);

let n = NaN;
console.log(Number(n));

/*
null == undefined        => true
null === undefined        => false
console.log(null==0);      =>false
null is only equivalent to itself ,

*/
console.log(null==0);
console.log(null===null);
console.log(undefined==undefined);
console.log(0==0);

console.log(+undefined);
console.log(null==NaN);// nul is only equivalent to undefined

let g = "him";
let y = "him";
console.log(g==y);

console.log(undefined == null);
console.log(undefined != null);


console.log(5<<2);
console.log(5<<3);
console.log(5>>3);


console.log(10>>2);// right shift by 2 place => 1010 ==> right shift by 2 place =>0010 => return 2
