let price = 46;
console.log("product price is", price);
console.log(`product price is ${price}`);

// print "hello " with quotation

console.log(' "hello" ');
let msg = "himsnahu \n ius a "; // \n for new line 
console.log(msg);


// if we need to p[rine \n also in message - we use the escape character (\)


let msg2 = "hello i am \\n himanshu"
console.log(msg2);

// new way to create string - using new keyword

let str = new String("himanshu is a name")
console.log(str);
console.log(typeof str);

// what is the advantage or benifit of new keyword -  it store in heap , not in stack 

// can we apply method on it 

console.log("subString", str. substring(0 , 3));
console.log("split",str.slice(1, 3)); 
console.log("replace", str.replaceAll("h" , "b"));

console.log("slice" , str.split(" "));

// we can use most method of noramal string but we can not use equality method

let str1 = new String ("himanshu is a name");
let st = "himanshu is a name";
console.log(st == str1);  // return true

let str2 = new String ("himanshu is a name");
console.log(str1== str2); // return false ; coz object is not return true coz memory location is different


let a = {
    name:"hiamshu"
}
let b = {
    name:"hiamshu"
}

console.log(a==b);






