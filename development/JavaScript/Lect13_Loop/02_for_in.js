// For In loop is ideal for Objects -  

// Used to iterate over the keys (property names) of an object.

// Can also be used on arrays, but it gives indices as strings, not the actual values — so it’s usually not recommended for arrays.



let obj = {name:"himanshu",
    class:"first",
    section:"a",
    details:{
        account:45654,
        balance:456,
        gender:"male"
    }
}
// access keys of object 
console.log("\n");
console.log("Accessing keys using for in");
for (let keys in obj){
    console.log(keys);
}

// to get key of nested loop  - 
console.log("\n");
console.log("Accessing keys of nested object using for in");

for (let Nested_keys in obj.details){
    console.log(Nested_keys); 
}


// access values of object using for in  - 


//
console.log("\n");
console.log("Accessing values using for in");


for (let values in obj){
    console.log(obj[values]);
}

console.log("\n");
console.log("Accessing nested values using for in");

for (let Nestedvalues in obj.details){
    console.log(obj.details[Nestedvalues]);
    
}


// for in loop for Array

console.log("\n");
console.log("Accessing keys using for in");


let arr = [10,20,30,40,50];
for (let keys in arr){
    console.log(keys);
}
// we can access keys and values of array using for in loop , but problems is if we add property in array manaully with random Key, it will not good for production


arr.name = "himanshu";
arr.class = "first";
arr[5] = "nine"; // we we add any property in array with numeric key name it will goes befor the property name which are in alphabets , which is not a perfect approach

// nine goes before the himanshu and first in array
console.log(arr);

console.log("\n");
console.log("Accessing Array values using for in");

for (let values in arr){
    console.log(arr[values]);
}




let arr1 = [10,20,30,40];
arr1.name = "himanshu"
arr1[6] = 90;

console.log("arr1 using for in ");

for (let key in arr1){
    console.log(key);
}

for (let value in arr1){
    console.log(arr1[value]);
}
console.log("using normal for loop");

for (let i = 0 ; i < arr1.length ; i++){
    console.log(arr1[i]);
    
}