let a = [1,2,3,4,5];
let b = a.pop();
console.log(b); // retur the removed element;

console.log(a);

// add element in first position
let m = [8,1,2,3,4,5,6];
console.log(m.unshift(5)); // return the ew length of array
console.log(m);

let k = m.shift()
console.log(k); // return the removed element
console.log(m);

// console.log(m.shift(1));



let y = [1,2,3,4,5,6,7];
let removed  = y.splice(1,3); // remove element from index 1 to index 3

console.log("removed", removed);

console.log(y); // updated array

// add element using splice
let z = [1,2,3];
z.splice(1,0,8) // at index 1 add 8 as new element
console.log(z);

z.splice(2,0,5,6,8,4,6,9);
console.log(z);


// replace using splice 

let r = [1,2,3,4,5,6];
r.splice(1,2,6,9)
console.log(r);



let e = [1,2,3,4,5];
console.log(delete e[0]);
console.log(e); 


// delete will delete the element but location will be avaiable// space is reserved ;
console.log(e[0]);

delete e[3]
console.log(e);


let t = [1,2,3];
let p = [8,5,2];
let d = [...t , ...p];
console.log(d);


// we can add element using spread operator also 
console.log([...t , 5]);
console.log([4,...t]);
console.log(t);

let a1 = [1,2,3,4,5];
console.log(a1.splice(1,2));
console.log(a1);

let a2 = [1,2,3,4,5,4];
console.log(a2.indexOf(4));
console.log(a2.lastIndexOf(4));
console.log(a2.includes(3))


console.log(a2);
console.log(a2.slice(2,5));
console.log(a2);// not modify the orignal arrray, return new array
console.log(a2.splice(2,5));
console.log(a2); // modify orignal array




