// creation of number using new keyword 


let a = new Number(231);
console.log(a);

let b = +a;
console.log(typeof b);
let c = new Number (231);


console.log(a==c);

 c = +c;
console.log(b==c)


let n1 = 345.287;
console.log(n1.toFixed(2));
console.log(n1.toExponential(3));
console.log(n1.toPrecision(1));

// print umber from 1 to 6

let n2 = Math.ceil(Math.random()*6);
console.log("n2", n2);

// print between 40 to 50

let min = 40;
let max = 50;

console.log(Math.floor(Math.random()*(max-min+1)+min));// it will return 40 to 50
// or
console.log(Math.ceil(Math.random()*(max-min)+min)); // it will return 39 to 50

// so always use 1st formula

// generate between 0 to 9
let mn = 0;
let mx = 9
console.log(Math.floor(Math.random()*(mx-mn+1)+mn));



// print 1 to 12

let mi = 1;
let ma = 12;

console.log(Math.floor(Math.random()*(ma-mi+1)+mi));

// ludo 1 to 6 generator

let min1 = 1 ;
let max1 = 6 
console.log("ludo", Math.floor(Math.random()*(max1-min1+1)+min1));

// generate otp from 100001 -900009

let otpmin = 100001;
let otpmax = 900009;

console.log("otp",Math.floor(Math.random()*(otpmax-otpmin+1)+otpmin));
// but this is not safe and  acess by the hackers , coz it uses the system clock value 
// so it will not use for otp generate

