// function - group of code which perform a special task, it only perform when invoke it.


// normal function
function greet(){
    console.log("hello");
    console.log("hi");
    console.log("why");
}
greet();


// program to add 2 number

function add (num1 , num2){
    let sum = num1+num2;
   console.log( sum);
    
}
add(2 , 5);
add(10,15);

function multi(num1, num2){
    const mul = num1*num2;
    return mul;
}
let result = multi (5, 8);
console.log(result);

const fun1 = function (){
    console.log("helo");
    
}
fun1();

// fun1 variable store the refrence of that function

// arrow function 

const fun2 =  (num1 , num2)=>{
    const sum =  num1+num2;
    console.log("hi i");
    return sum; 
}
let res = fun2(25,64);
console.log(res);
console.log(fun2(25,64));

// if we dont use { } in arrow function , no need to write return keyword in arrow function.


const sum = (num1 , num2)=> (
        num1+num2,
        num1*num2,
        num2-num1);

        // sum(35,14);
console.log(sum(35, 14));
        // it will return the last statement only

        // if we need to get all output of all expression we can make a array of all expression


const sum1 = (num1 , num2)=> ( [
        num1+num2,
        num1*num2,
        num2-num1]);

        // sum(35,14);
console.log(sum1(35, 14));
        

// if we have only 1 paramter , no need to enclode it by ();

// arrow function - when only single parameter

const cube = num => num*num*num;
console.log(cube(5));


const sun = function (...number){
    let add = 0 ;
    for (let i = 0 ; i < number.length ; i++){
        add = add+number[i];
    }
    console.log(add);
    
}
sun(1,2,3,4,5,6, 7, 10);
sun(2,7,8,5,4,6);


// object pass in function


const obj = {
    user : "himanshu",
    age : 18,
    gender: "male"
}


function fun(obj1){
    console.log(obj1.user);
    console.log(obj1.age);
}

fun(obj);

// use object destructuring here


function fun11({user, gender}){
    console.log(user);
    console.log(gender);
    
}

fun11(obj)

function fun3 (obj1){
console.log(obj1);
obj1.user ="raju"; // modification changes also in origanl object
console.log(obj1);
 
}
fun3(obj)
console.log(obj); // modition changes in orignal object, so it is pass by refrence

// how we change it , means we dont want to modify the property of orignal object
function updateUser(user) {
  user = { name: "Sita" };
  console.log(user);
   // reassigning reference — affects only local copy
}

const person = { name: "Rahul" };
updateUser(person);

console.log(person.name); // 👉 "Rahul" (unchanged)
