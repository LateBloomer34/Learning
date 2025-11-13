// object - An object in JavaScript is a collection of key–value pairs that are used to store and organize data.
// Each key (called a property name) is a string (or Symbol), and each value can be anything — a string, number, array, another object, or even a function.

// how to create an object

const person = {
  name: "Himanshu",
  age: 25,
  profession: "Bartender",
  skills: ["Mixology", "Customer Service"],
  greet: function() {
    console.log(`Hello, my name is ${this.name}`);
  },
  greet1: function() {
    console.log(`Hello, my name is ${person.name}`);
  },
  "rank":1,
  0:"number",
};

console.log(person.name);  
console.log(person["name"]);  
console.log(person.skills[0]); 
person.greet();  
person.greet1();             
console.log(person);
console.log(person.rank);
console.log(typeof person);
console.log(person["0"]);

// if we pass number as a key , access it using [] , we can not acccess using . method.


// why some property are access using () , and some are without().
// coz the property access using () , are the function, and some are access without () are the key

let arr = [1,2,3,4,5,6];
console.log("concat", arr.concat("*")); // concat add lement in the last
console.log(arr.toString());

// to merge all element use the join method insted of concat

console.log(arr.join(" "));



// other  way to create an object

const pers = new Object();
pers.name = "himanshu";
pers.gender = "male";
pers.age = 30;
console.log(pers);

// delete property 
delete pers.age;
console.log(pers);


