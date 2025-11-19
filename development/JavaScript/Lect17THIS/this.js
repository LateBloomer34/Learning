//
console.log(global);
console.log(this===global);
console.log(this);

// this keyword

// The this keyword refers to the current execution context.

// What this points to depends on how a function is called, not where it’s defined.



//  In browsers vs Node.js (or IDE)

// In a browser’s global scope (outside of any function):

console.log(this); // window


// In Node.js global scope:

console.log(this); // {}


// (Inside a module, this is not the global object.)

// this in regular functions

// In a normal function, this is dynamic and depends on how you call it.

function normalFunc() {
  console.log(this);
}

normalFunc(); // In browser: window


// If a function is called as a method of an object:

const obj1 = {
  name: "Alice",
  greet() {
    console.log(this.name);
  }
};

obj1.greet(); // "Alice"

// 4️⃣ this in arrow functions

// Arrow functions do not have their own this.

// They lexically inherit this from their parent scope:

const obj = {
  name: "Alice",
  greet: function() {
    const arrowFunc = () => console.log(this.name);
    arrowFunc();
  }
};

obj.greet(); 


// Arrow functions and this

// Arrow functions never have their own this. They always try to use this from the closest enclosing (parent) scope.

// 2️⃣ What happens if this is “not available” in the parent?

// By “not available,” I assume you mean the parent scope doesn’t have a meaningful this (like in the global scope in strict mode or inside a module).

// In non-strict mode, this in the global scope defaults to the global object:

const arrow1 = () => console.log(this);
arrow1(); // window in browser (non-strict mode)


// In strict mode or inside ES modules:

"use strict";
const arrow2 = () => console.log(this);
arrow2(); // undefined


// Because strict mode disables defaulting this to the global object.