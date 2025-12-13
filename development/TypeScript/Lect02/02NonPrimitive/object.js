"use strict";
// array creatioon in ts
Object.defineProperty(exports, "__esModule", { value: true });
let arr = [1, 2, 3, { name: "him", class: "12" }];
console.log(arr);
console.log(typeof arr);
let arr1 = [1, 2, 3, 4];
console.log(arr1);
let arr2 = [1, 2, 3, "hi"];
console.log(arr2);
// creation of tuple -  tuple is fixed size of array , in which we must declear the type of every element
// In TypeScript, a tuple is used when:
// The number of elements is fixed
// Each element can have a different data type
// The order and type of elements matter
let tupl = [1, 2, "hi", true];
console.log(tupl);
// object in TS - 
//inline object - An inline object type is used to define the shape of an object directly where it is declared.
// Inline object with declaration + initialization together
let obj = { name: "him",
    class: 12,
};
console.log(obj);
// Inline object with delayed initialization
let obj2;
obj2 = { name: "him",
    class: 12,
};
console.log(obj2);
// type student = {state : string} // can not recereate student type;
let detail = { name: "him",
    class: 12,
    subject: "ts"
};
console.log(detail);
let user = {
    name: "him",
    class: 12,
    subject: "computer"
};
console.log(user);
let detai = {
    class: 12,
    age: 18,
    height: 168,
    city: "uttarakhand"
};
console.log(detai);
// using interface is the best practice , Use interface for objects and public APIs; use type for unions, primitives, and complex types.
