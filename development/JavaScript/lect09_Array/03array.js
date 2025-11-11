let a = [1,2,3,4,5,6];
console.log(a);
console.log(a.push(7));
console.log(a);

console.log("orignal array", a);

a.pop();
console.log("orignal array", a);

 a.unshift(6);
console.log("orignal array", a);

a.splice(4,-1,1,2,3,4,5,6,7,8,9);
console.log("orignal array", a);

let b = [9,8,7];
let c = a.concat(b);
console.log("c",c);

console.log("orignal array", a);

let d = a.concat("him")
console.log(d);

console.log("orignal array", a);

let a1 = [1,2,3];
let a2 = [4,5,6];
let a3 = [...a1 , ...a2]
console.log(a3);
console.log(a1);
console.log(a2);

a = [1,2,3,4,5,6];
console.log(a);
a.pop()
console.log("orignal array", a);
a.shift();
console.log("orignal array", a);

a.splice(1,3)
console.log("orignal array", a);

 a= [1,2,3,4,5,6];
 delete a[3];
 console.log("orignal array", a);
 
 
 a= [1,2,3,4,5,6];
 console.log("orignal array", a);

 a.slice(1,4);
 console.log("orignal array", a);
 
 console.log("orignal array", typeof a.toString());
//  console.log("orignal array", a.toNumber());
console.log("orignal array", a.join("true"));
 
a= [1,2,3,4,5];
b = [9,8,7];
c = [8,5,2];
d = a.concat(b, c)
console.log(a);
console.log(d);

let e = [...a ,...b ,...c, ...d]
console.log(a);
console.log(e);


// convert 2 -d or multidimentional array into 1d arry

a = [1,2,[3,4,[5,6,]],[9,7,8]];
console.log(a.flat(2 ));

console.log(Array.isArray(a));


a = new Array(3);
console.log(a);


console.log(typeof null);
