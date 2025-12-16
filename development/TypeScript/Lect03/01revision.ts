// revison - 

// creation of primitive -  

// number
let num:number = 12;
console.log(num);

// string

let name:string = "himanshu";
console.log(name);


// boolean

let result:boolean = true;
console.log(result);

// undefined 

let marks:undefined = undefined;
console.log(marks);

// null 
let value :null = null;
console.log(value);

//bigInt

let num1:bigint = 456n;
console.log(num1);



// non primitive

// array;
// same type elemet
let arr1: number[] = [1,2,3,4,5];
console.log(arr1);

// multi type element

let arr2 :(number | string | boolean)[] = [1,2,3,"him" , true];
console.log(arr2);

// creting array using tuple 

let arr3 : [number , string , boolean] = [1,"him" , true];
console.log(arr3);




// obejct - 

// 1-  inline object with decleration

let obj :{name:string , age:number} = {
    name:"himanshu",
    age:25
}
console.log(obj);

// 1.1- inline object with delay decleratin 

let obj2 : {state:string , gender:string}; // creation of object

// decleration of object
 obj2 = {
    state:"uttarakhand",
    gender:"male"
}
console.log(obj2);


// 2 - object creation using type keyword

type details = {
    name:string,
    class:number
}

let him:details = {
    name:"himanshu",
    class:12
}

//We cannot redeclare a type with the same name; every time we need to modify the type, but to overcome this problem, we use interfaces.


interface detai {
    name:string,
    class:number
}
interface detai {
    gender:string,
    result:boolean
}

let user:detai = {
    name:"himanshu",
    class:12,
    gender:"male",
    result:true
}

console.log(user);




