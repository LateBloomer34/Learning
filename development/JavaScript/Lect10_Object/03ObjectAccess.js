let obj = {
    name:"himanshu",
    age:20,
    "gender":"male"
};

let keys = Object.keys(obj);
let values = Object.values(obj);

// to access the keys and values of obejct
console.log(keys);
console.log(values);



// access keys and values in Array; 
// we can access the key and value of array using the same methos , coz implimentation of array is same as object

let arr = [1,2,3,4,5,6];
let key = Object.keys(arr);
let value = Object.values(arr);
console.log(key);
console.log(value);


// if we want key and value both in the form of array

const key2 = Object.entries(obj);
console.log(key2);
// it will return key and value in form of array, basically it return 2D array




// merging 2 object
let obj1 = {
    a:1,
    b:2
}
let obj2 = {
    c:3,
    d:4
}

let obj3 = {...obj1 , ...obj2};

console.log(obj1);
console.log(obj2);
console.log(obj3);


// merge object using assign

let assign = Object.assign(obj1, obj2);
console.log("assign",assign);
console.log(obj1);
console.log(obj2);

// but it will return the source object value, source object is the object which is write in first

// to overcome this problem we can use
let obj11 = {
    a:1,
    b:2
}
let obj12 = {
    c:3,
    d:4
}
let assign1 = Object.assign({}, obj11 , obj12)
console.log("assign1", assign1);
console.log("obj11",obj11);
console.log("obj12",obj12);




// merge 2 array

let arr1 = [1,2,3];
let arr2 = [4,5,6];
let arr3 = [...arr1, ...arr2];
console.log(arr3);
let key1 = Object.keys(arr3)
console.log(key1);

let values1 = Object.values(arr3);
console.log(values1);
 



