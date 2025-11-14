const person ={
    name:"himanshu",
    gender:"male",
    age:25
};
console.log("orignal obj" , person);;

const{name , age} = person;
console.log("name", name);
console.log("age",age);

const {name:user_name , age: umar} = person;
console.log("usename", user_name , "age", umar);

console.log("orignal object" , person);

person.name = "raju";
console.log(person.name);
console.log(person);

// add new property

// add property using destructuring is not possible

person.city = "india";
console.log(person);
const { city , ...rest} = person;
console.log(person);

// destructuring of nested object



const obj = {
    name1 :"him",
    class1:12,
    pro:{
        gender:"male",
        section:"b",
    }
};

console.log(obj);

const {name1 , class1 , pro: {gender , section}} = obj; 

console.log("props", gender);
// console.log("props", pro);
console.log(name1);
//console.log(pro); // can not access seperately





// problem  - create a raay inside object and print the value of array




const obj1 = {
    name2 :"him",
    class2:12,
    marks:[4,5,6,7],
    pro:{
        gender:"male",
        section:"b",
    }
};

const{name2 , class2 ,  marks:[first ,sec, thi ,fou] , pro} = obj1;

console.log("array");

console.log(name2);
console.log(class2);
// console.log(marks);
console.log(first);
console.log(sec);
console.log(pro);





