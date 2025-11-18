// reduce an entire array to one final value
// useful for calculating totals, counts, or building complex results

// reduce requires a callback function
// this callback function takes (at minimum) 2 parameters:
// 1. accumulator – stores the running result
// 2. currentElement 



let arr = [10,20,30,40];
const res = arr.reduce(function(accumu , number){
        accumu = accumu*number;
        return accumu;
} , 1);

// 1 → initial value of the accumulator;

console.log(res);


// problem : find the numbe of frequency 



let arr1 = ["orange" , "apple" , "lemon" , "apple" , "apple" , "lemon"];

// method 1 - 
let resu = arr1.reduce(function (accu , current){
    if (accu.hasOwnProperty(current)){ // if key present return true, else false
        accu[current]++;
    }
    else{
        accu[current]= 1 ;
    }
    return accu;
} , {});

console.log(resu);


// method 2- 

let resul = arr1.reduce(function (accu , current){
    if (!accu[current]){
        accu[current] = 1;
    }
    else{
        accu[current]++;
    }
    return accu;
} , {});

console.log(resul);


// prob 2 - find the frequency - 

let ele = ["a" , "b" , "a" , "c" , "a"  , "b" , "d"];
let final = ele.reduce ((acc , value)=> {
    if (acc[value]){
        acc[value]++;
    }
    else{
        acc[value] = 1;
    };
    return acc;
} , {});
// dont use . method here ;
console.log("final" , final);
