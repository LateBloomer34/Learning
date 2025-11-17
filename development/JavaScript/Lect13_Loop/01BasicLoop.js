// for loop
// while loop
// do while loop
// switch case


// for loop


for (let i = 0; i< 6 ; i++){
    console.log(i);    
}


// while loop


console.log("while loop");


let j = 0 ; 
while(j < 6){
    console.log(j);
    j++;
}


console.log("do while loop");


let m = 0;
do{
    console.log(m);
    m++;
}
while(m<6)


console.log("switch case");


let consdition  = 1;

switch(consdition ){
    case 1 : console.log("monday");
    break;

    case 2 :console.log("tuesday");
    break;

    case 3 :console.log("wednesday");
    break;

    case 4 :console.log("thrusday");
    break;

    case 5 :console.log("friday");
    break;

    case 6 :console.log("saturday");
    break;

    case 7 :console.log("sunday");
    break;
    

}



// for in loop -  to get the key and value and key of the object.

let obj = {
    name :"him",
    class:"first",
    sex:"male"
}

console.log(obj);

for ( let key in obj){
    console.log(key , obj[key]);
}

// for of loop - 

console.log("for of loop");

// for of is use for iterateable - object is not iterateable , so it use for array

let arr = [1,2,3,4];
for ( let values of arr  ){
    console.log(values);
}


let obj1 = {
    name1 : "him1",
    class1: "first1",
    sex1: "male1"
}

//  to access the vlues of arrays first access the key - Object.keys(obj1);

let ObjKey = Object.keys(obj1); //[ 'name1', 'class1', 'sex1' ]


for(let key of ObjKey){
    console.log(obj1[key]);
}

// or

for(let key of Object.keys(obj1)){
    console.log(obj1[key]);
}



