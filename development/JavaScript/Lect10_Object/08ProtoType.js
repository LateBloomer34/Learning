// prototype -  prototype is an object from which other object takes the proprty.

let obj1 = {
    name:"him",
    age:20,
}

let obj2 = {
    classs:"first",
    section:"a",
}
console.log(obj2.name);

obj2.__proto__ = obj1;
// after using .__proto__ obj2 get the property of obj1 , bu orignal object remain same.

console.log(obj2.name);
console.log(obj2);



//  to check the prototype of any obj or an array use ObjName.__proto__


// array inherit the property from its prototype which is object in nature, that the reason array is an object.