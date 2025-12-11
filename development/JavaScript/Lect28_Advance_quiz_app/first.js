const questionbank= [
  { Question: "Which company originally developed JavaScript?", Option: ["Microsoft", "Netscape", "Sun Microsystems", "Google"], CorrectAnswer: "Netscape" },
  { Question: "What is the output of `typeof null` in JavaScript?", Option: ["\"null\"", "\"object\"", "\"undefined\"", "\"number\""], CorrectAnswer: "\"object\"" },
  { Question: "Which symbol is used for single-line comments in JavaScript?", Option: ["//", "/*", "<!--", "#"], CorrectAnswer: "//" },
  { Question: "What is the result of `\"5\" + 3` in JavaScript?", Option: ["8", "53", "\"53\"", "\"8\""], CorrectAnswer: "\"53\"" },
  { Question: "What is the result of `\"5\" - 3` in JavaScript?", Option: [2, "\"2\"", "52", "\"52\""], CorrectAnswer: 2 },
  { Question: "Which keyword declares a block-scoped variable in JavaScript?", Option: ["var", "let", "const", "both let and const"], CorrectAnswer: "both let and const" },
  { Question: "Which operator tests for both value and type equality?", Option: ["==", "=", "===", "!=="], CorrectAnswer: "===" },
  { Question: "Which method converts a JSON string into a JavaScript object?", Option: ["JSON.parse()", "JSON.stringify()", "JSON.object()", "parseJSON()"], CorrectAnswer: "JSON.parse()" },
  { Question: "Which method converts a JavaScript object to a JSON string?", Option: ["JSON.parse()", "JSON.stringify()", "JSON.toString()", "Object.toJSON()"], CorrectAnswer: "JSON.stringify()" },
  { Question: "Which array method adds one or more elements to the end of an array?", Option: ["push()", "pop()", "shift()", "unshift()"], CorrectAnswer: "push()" },
  { Question: "Which array method removes the last element from an array?", Option: ["pop()", "push()", "shift()", "unshift()"], CorrectAnswer: "pop()" },
  { Question: "Which array method adds one or more elements to the beginning of an array?", Option: ["push()", "pop()", "shift()", "unshift()"], CorrectAnswer: "unshift()" },
  { Question: "Which array method removes the first element from an array?", Option: ["pop()", "push()", "shift()", "unshift()"], CorrectAnswer: "shift()" },
  { Question: "Which array method creates a new array with all elements that pass a test?", Option: ["map()", "filter()", "reduce()", "forEach()"], CorrectAnswer: "filter()" },
  { Question: "Which array method applies a function against an accumulator and each element to reduce it to a single value?", Option: ["map()", "filter()", "reduce()", "forEach()"], CorrectAnswer: "reduce()" },
  { Question: "Which method executes a provided function once for each array element?", Option: ["map()", "filter()", "reduce()", "forEach()"], CorrectAnswer: "forEach()" },
  { Question: "What does `'use strict'` do in JavaScript?", Option: ["Enable strict mode", "Make JS faster", "Disable ES6 features", "None of the above"], CorrectAnswer: "Enable strict mode" },
  { Question: "Which keyword can be used to define a function in JavaScript?", Option: ["function", "def", "fun", "proc"], CorrectAnswer: "function" },
  { Question: "What is the output of `console.log(0 == false)`?", Option: ["true", "false", "undefined", "TypeError"], CorrectAnswer: "true" },
  { Question: "What is the output of `console.log(0 === false)`?", Option: ["true", "false", "undefined", "TypeError"], CorrectAnswer: "false" },
  { Question: "What is the scope of a variable declared with `var` inside a function?", Option: ["Block scope", "Function scope", "Global scope", "Module scope"], CorrectAnswer: "Function scope" },
  { Question: "What is the scope of a variable declared with `let` inside a block?", Option: ["Block scope", "Function scope", "Global scope", "Module scope"], CorrectAnswer: "Block scope" },
  { Question: "Which object method returns an array of a given object's own property names?", Option: ["Object.getKeys()", "Object.keys()", "Object.names()", "Object.properties()"], CorrectAnswer: "Object.keys()" },
  { Question: "Which operator is used to check if a property exists in an object?", Option: ["in", "has", "exists", "contains"], CorrectAnswer: "in" },
  { Question: "What does `this` refer to in a global function (not strict mode)?", Option: ["undefined", "global object (window)", "the function itself", "null"], CorrectAnswer: "global object (window)" },
  { Question: "What does `this` refer to inside a method of an object?", Option: ["undefined", "the object itself", "global object", "null"], CorrectAnswer: "the object itself" },
  { Question: "Which keyword prevents modifying a variable's value?", Option: ["var", "let", "const", "static"], CorrectAnswer: "const" },
  { Question: "What is the output of `typeof []` in JavaScript?", Option: ["\"array\"", "\"object\"", "\"list\"", "\"collection\""], CorrectAnswer: "\"object\"" },
  { Question: "What is the output of `typeof {}` in JavaScript?", Option: ["\"object\"", "\"map\"", "\"dictionary\"", "\"array\""], CorrectAnswer: "\"object\"" },
  { Question: "Which method returns the length of a string?", Option: ["length()", "size()", "length", "count()"], CorrectAnswer: "length" },
  { Question: "What does `NaN` stand for in JavaScript?", Option: ["Not a Number", "Null and Null", "No Answer", "Not a Name"], CorrectAnswer: "Not a Number" },
  { Question: "Which global function parses a string and returns an integer of the specified radix?", Option: ["parseInt()", "parseNumber()", "Number()", "int()"], CorrectAnswer: "parseInt()" },
  { Question: "Which statement will exit a loop immediately?", Option: ["continue", "break", "exit", "return"], CorrectAnswer: "break" },
  { Question: "Which statement skips the current iteration and moves to the next one in a loop?", Option: ["break", "skip", "continue", "return"], CorrectAnswer: "continue" },
  { Question: "Which operator returns the remainder of a division?", Option: ["%", "/", "*", "//"], CorrectAnswer: "%" },
  { Question: "Which operator increments a number by one?", Option: ["++", "+=", "--", "-="], CorrectAnswer: "++" },
  { Question: "Which operator decrements a number by one?", Option: ["--", "-=", "++", "+="], CorrectAnswer: "--" },
  { Question: "Which keyword declares a class in ES6?", Option: ["function", "class", "object", "struct"], CorrectAnswer: "class" },
  { Question: "Which method is used to create a shallow copy of part of an array from start to end (excluding end)?", Option: ["slice()", "splice()", "copy()", "subarray()"], CorrectAnswer: "slice()" },
  { Question: "Which method changes the contents of an array by removing or replacing existing elements and/or adding new elements in place?", Option: ["slice()", "splice()", "map()", "filter()"], CorrectAnswer: "splice()" },
  { Question: "What is hoisting in JavaScript?", Option: ["Moving declarations to top", "Lazy loading", "Importing modules", "Garbage collection"], CorrectAnswer: "Moving declarations to top" },
  { Question: "What is a callback function in JavaScript?", Option: ["A function passed as argument to another function", "A function that returns another function", "A self-invoking function", "A recursive function"], CorrectAnswer: "A function passed as argument to another function" },
  { Question: "Which method adds event listener in browser JS?", Option: ["addListener()", "on()", "addEventListener()", "attachEvent()"], CorrectAnswer: "addEventListener()" },
  { Question: "Which keyword is used to define arrow functions?", Option: ["->", "=>", "=>=", "|>", "::"], CorrectAnswer: "=>" },
  { Question: "What is the output of `[] + []` in JavaScript?", Option: ["\"\"", "0", "undefined", "Error"], CorrectAnswer: "\"\"" },
  { Question: "What is the output of `[] + {}` in JavaScript?", Option: ["\"[object Object]\"", "\"\"", "NaN", "TypeError"], CorrectAnswer: "\"[object Object]\"" },
  { Question: "What is the output of `{} + []` in JavaScript (in console)?", Option: ["0", "\"[object Object]\"", "\"[object Object]0\"", "\"\""], CorrectAnswer: "0" },
  { Question: "What is the output of `typeof NaN`?", Option: ["\"NaN\"", "\"number\"", "\"undefined\"", "\"object\""], CorrectAnswer: "\"number\"" },
  { Question: "Which method returns a new array with the results of calling a provided function on every element in the array?", Option: ["map()", "forEach()", "filter()", "reduce()"], CorrectAnswer: "map()" },
  { Question: "What will `console.log([] == ![]);` output?", Option: ["true", "false", "undefined", "TypeError"], CorrectAnswer: "true" },
  { Question: "Which symbol is used for rest parameters in ES6?", Option: ["*", "&", "...", "#"], CorrectAnswer: "..." },
  { Question: "Which symbol is used for spread syntax in ES6?", Option: ["...", "...?", "...!", "...$"], CorrectAnswer: "..." },
  { Question: "What does `Promise.resolve(value)` return?", Option: ["Promise fulfilled with value", "Undefined", "Error", "Null"], CorrectAnswer: "Promise fulfilled with value" },
  { Question: "Which method of Promise handles a fulfilled Promise?", Option: ["then()", "catch()", "finally()", "resolve()"], CorrectAnswer: "then()" },
  { Question: "Which method of Promise handles a rejected Promise?", Option: ["then()", "catch()", "finally()", "reject()"], CorrectAnswer: "catch()" },
  { Question: "Which keyword is used to handle asynchronous operations more cleanly than Promises chaining?", Option: ["sync", "await", "async", "defer"], CorrectAnswer: "async" },
  { Question: "Which keyword is paired with `async` to wait for a Promise to settle?", Option: ["wait", "await", "then", "pause"], CorrectAnswer: "await" },
  { Question: "What is the output of `typeof (() => {})`?", Option: ["\"function\"", "\"arrow\"", "\"object\"", "\"undefined\""], CorrectAnswer: "\"function\"" },
  { Question: "Which method returns the index of the first occurrence of a value in a string", Option: ["search()", "find()", "indexOf()", "match()"], CorrectAnswer: "indexOf()" },
  { Question: "Which method returns the substring between two indices from a string?", Option: ["substring()", "substr()", "slice()", "sub()"], CorrectAnswer: "substring()" },
  { Question: "Which method removes whitespace from both ends of a string?", Option: ["trim()", "strip()", "clean()", "clear()"], CorrectAnswer: "trim()" },
  { Question: "What will `0.1 + 0.2 === 0.3` evaluate to in JavaScript?", Option: ["true", "false", "undefined", "TypeError"], CorrectAnswer: "false" },
  { Question: "Which built-in object provides methods for mathematics constants and functions?", Option: ["Math", "Number", "Calculator", "MathJS"], CorrectAnswer: "Math" },
  { Question: "What will `Math.floor(4.7)` return?", Option: [4, 5, 4.7, "4"], CorrectAnswer: 4 },
  { Question: "What will `Math.ceil(4.3)` return?", Option: [4, 5, 4.3, "5"], CorrectAnswer: 5 },
  { Question: "Which method converts a number to a string?", Option: ["toString()", "string()", "toStr()", "str()"], CorrectAnswer: "toString()" },
  { Question: "Which global object is the entry point to DOM in browser JavaScript?", Option: ["document", "window", "DOM", "global"], CorrectAnswer: "document" },
  { Question: "Which method returns elements by class name in DOM API?", Option: ["getElementsByClassName()", "getByClass()", "getClass()", "queryByClass()"], CorrectAnswer: "getElementsByClassName()" },
  { Question: "Which method returns an element by its ID in DOM API?", Option: ["getElementById()", "getById()", "queryById()", "getID()"], CorrectAnswer: "getElementById()" },
  { Question: "Which array method flattens nested arrays in ES2019?", Option: ["flat()", "flatten()", "reduce()", "concat()"], CorrectAnswer: "flat()" },
  { Question: "Which operator is used for optional chaining introduced in ES2020?", Option: ["?.", "||", "&&", "??"], CorrectAnswer: "?. " },
  { Question: "What does `NaN !== NaN` return in JavaScript?", Option: ["true", "false", "undefined", "TypeError"], CorrectAnswer: "true" },
  { Question: "Which method copies properties from source object(s) to a target object?", Option: ["Object.assign()", "Object.copy()", "Object.extend()", "copy()"], CorrectAnswer: "Object.assign()" },
  { Question: "Which method returns an array of values of an object’s own enumerable string-keyed property values?", Option: ["Object.values()", "Object.entries()", "Object.keys()", "Object.props()"], CorrectAnswer: "Object.values()" },
  { Question: "Which operator is used to provide default values when dealing with null or undefined (nullish)?", Option: ["||", "&&", "??", "?: "], CorrectAnswer: "??" },
  { Question: "Which loop iterates over property names (keys) of an object?", Option: ["for", "for...in", "for...of", "while"], CorrectAnswer: "for...in" },
  { Question: "Which loop iterates over values of an iterable object (like array)?", Option: ["for", "for...in", "for...of", "while"], CorrectAnswer: "for...of" },
  { Question: "Which statement creates a new scope and executes code only if condition is true?", Option: ["for", "if", "switch", "while"], CorrectAnswer: "if" },
  { Question: "Which keyword throws a custom exception in JavaScript?", Option: ["throw", "error", "exception", "raise"], CorrectAnswer: "throw" },
  { Question: "Which block handles exceptions thrown in try block?", Option: ["catch", "then", "finally", "error"], CorrectAnswer: "catch" },
  { Question: "Which block executes whether or not an exception is thrown in try/catch?", Option: ["finally", "then", "catch", "cleanup"], CorrectAnswer: "finally" },
  { Question: "Which directive prevents code from accessing variables before declaration?", Option: ["use strict", "strict mode", "strict", "'use strict'"], CorrectAnswer: "'use strict'" },
  { Question: "Which operator checks whether a value is NaN?", Option: ["isNaN()", "NaN()", "Number.isNaN()", "== NaN"], CorrectAnswer: "Number.isNaN()" },
  { Question: "Which method parses a string and returns a floating point number?", Option: ["parseFloat()", "parseInt()", "Number()", "float()"], CorrectAnswer: "parseFloat()" },
  { Question: "Which keyword can be used to import a module in ES6?", Option: ["require", "import", "include", "module"], CorrectAnswer: "import" },
  { Question: "Which keyword exports a module's bindings in ES6?", Option: ["export", "module.exports", "exports", "provide"], CorrectAnswer: "export" },
  { Question: "What will `[].length = 5` do to an empty array?", Option: ["Create array of length 5 with undefined items", "Error", "Length remains 0", "Fill with zeros"], CorrectAnswer: "Create array of length 5 with undefined items" },
  { Question: "Which method checks whether a string starts with specified characters?", Option: ["startsWith()", "includes()", "indexOf()", "match()"], CorrectAnswer: "startsWith()" },
  { Question: "Which method checks whether a string ends with specified characters?", Option: ["endsWith()", "includes()", "indexOf()", "search()"], CorrectAnswer: "endsWith()" },
  { Question: "Which type of equality allows type conversion before comparison?", Option: ["Strict equality (===)", "Loose equality (==)", "Identity (is)", "SameValue (Object.is)"], CorrectAnswer: "Loose equality (==)" },
  { Question: "Which function rounds a number to nearest integer?", Option: ["Math.round()", "Math.floor()", "Math.ceil()", "Math.trunc()"], CorrectAnswer: "Math.round()" },
  { Question: "Which method returns the largest integer less than or equal to a number?", Option: ["Math.floor()", "Math.round()", "Math.ceil()", "Math.trunc()"], CorrectAnswer: "Math.floor()" },
  { Question: "Which method returns the smallest integer greater than or equal to a number?", Option: ["Math.ceil()", "Math.floor()", "Math.round()", "Math.trunc()"], CorrectAnswer: "Math.ceil()" },
  { Question: "Which operator is used to get the type of a value?", Option: ["typeof", "instanceof", "type", "classof"], CorrectAnswer: "typeof" },
  { Question: "Which built-in object provides methods for date and time?", Option: ["Date", "Time", "Calendar", "Clock"], CorrectAnswer: "Date" }
];

// function to pick random 5 unique questions  -  we can use set data structure;

// function questionPicker(){
//     let data = new Set();
//     // console.log(data.size);
//     while(data.size!=5){
//         data.add(questionbank[Math.floor(Math.random()*20)])
//     }
//     // console.log(typeof data);
//     // console.log(data.size);
//     // console.log(data);   
//     // console.log([...data]);
//     return[...data];
// }
// console.log( questionPicker())




// create a function for 10 unique quesion generation

function questionGenerator(questionbank){
     // crete a set to store unique data 
     let set = new Set();
    //  we have to store only 5 question
  while(set.size<10){
    let randomQueIndex = Math.floor(Math.random()*questionbank.length);

    // add random index number into set
    set.add(questionbank[randomQueIndex])
  }
  return [...set];
}

// store return value for future use
let questionSet = questionGenerator(questionbank)





// access the root Div
let destination = document.getElementById("root");
let heading = document.createElement("h1");
heading.innerText = "JS quiz";
destination.appendChild(heading);
// create a div for quiz box
let quizBox = document.createElement("div");
quizBox.id = "quizContainer";

destination.appendChild(quizBox);
// create main heading of Quiz
// insert heading inside root


// create form for quiz Question
let form = document.createElement("form");
form.id= "quiz";
quizBox.appendChild(form);




// creation  a function for data inside form

function data(){

for(let i = 0 ; i< questionSet.length  ;i++){

  // creation of questions
  let questionHeading = document.createElement("h2");
  
  questionHeading.innerText = `${i+1}. ${questionSet[i].Question}`
  form.appendChild(questionHeading); // insert it inside form


  //  create option section
  for (let value of questionSet[i].Option){
     let label = document.createElement("label");

    let input = document.createElement("input");
    input.type = "radio";
    input.name = `q${i+1}`;
    input.value = value;

    label.appendChild(input);

    label.appendChild(document.createTextNode(value));//  to insert option which shown in UI; we can not insert it using append child coz value is out from input tag

    form.appendChild(label);
    
  }

}
}
data();

// creation of button box
let buttonBox = document.createElement("div");
buttonBox.id = "button";
form.appendChild(buttonBox);



// creation of reset button

let resetButton = document.createElement("button")
resetButton.type = "reset";
resetButton.id = "rstButton";
resetButton.innerText = "Reset";
buttonBox.appendChild(resetButton);

// creation of refresh button 
let refreshButton = document.createElement("button");``
refreshButton.type = "button";
refreshButton.id = "refButton"
refreshButton.innerText = "Refresh quiz"
buttonBox.appendChild(refreshButton);

// creation of submit button
let submitButton = document.createElement("button");
submitButton.type = "submit";
submitButton.id = "subButton"
submitButton.innerText = "Submit"
buttonBox.appendChild(submitButton);

// creation of resultBox;

let resultBox = document.createElement("div");
resultBox.id = "result";
resultBox.innerText = "Your result will be displayed here, please submit your quiz";
form.appendChild(resultBox);


// submit button functionality
submitButton.addEventListener("click", (event)=>{
        event.preventDefault();
        const data = new FormData(form);
        let count = 0 ;
        for (let [key , value] of data.entries()){
          // here  we have key are like q1, q2, q3 , so we need to remove q from it , to remove q from here we can use the slice method.

          let index = Number(key.slice(1))-1; 
          // convert key into number // coz we have key in string
          // why -1 , coz indexing start from 0 , and we have key from 1;
          if (value===questionSet[index].CorrectAnswer){
            count++;
          }
        } 
        resultBox.innerHTML = `you scored ${count} out of 10 on this quiz`;

        form.reset();
})

// reset button functionality
resetButton.addEventListener("click" , ()=>{
  resultBox.innerText = "You have pressed the Reset button, please restart your quiz";
})



// refresh Button functionality
refreshButton.addEventListener("click", ()=>{
     form.innerHTML = "";
     questionSet = questionGenerator(questionbank)
     data();
     form.appendChild(buttonBox);
     form.appendChild(resultBox);
     resultBox.innerText = "The quiz has been reset, please try again.";
});