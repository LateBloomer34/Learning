// for of is ideal for array element access ,
// but it is not ideal for Object, 
// coz every time we need to convert object key and value into Array.

// coz for of loop is only for iterable objects, and object is not iterable , and array is iterabel , 


// what is iterable -  we can aceess elements one by one


// for of loop for Arrays


let arr = [1,2,3,4,5,6];
for (let values of arr){
    console.log(values);   
}

console.log("\n access keys of array using for of ");

for (let keys of arr.keys()){
    console.log(keys);
}

//Array.keys() returns an iterable of indices

console.log("\n for of loop for objects");

// we can not directly access object using for of loop because objects are not iterables. so we need to convert it on iterable first,
// need to create array of keys and values seperately;

let obj = {name:"himanshu",
    class:"first",
    section:"a",
    details:{
        account:45654,
        balance:456,
        gender:"male"
    }
}

// for (let key of obj){
//     console.log(key);
//  // we can not aees it directly it will throw error obj is not iteratable if we try to access it    
// }

// how to access object;

// we can access keys of object using Object.keys(object_name);
// access key of object using for of loop
for (let keys of Object.keys(obj)){
    console.log(keys);
}

// access values of object using for of loop
for (let values of Object.values(obj)){
    console.log(values); 
}

// access the keys of nested object
console.log("\n access keys of neted object");

for ( let nestedKeys of Object.keys(obj.details)){
    console.log(nestedKeys);
    
}


// access the values of nested object
console.log("\n access values of nested object");

for (let values of Object.values(obj.details)){
    console.log(values); 
}

