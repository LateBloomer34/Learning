/*
time Complexity - measure the efficiency of algo in terms of speed.
low TC - faster speed.
Heigher TC - Lower Speed.

time complexity != time taken
coz time taken is depend on machine.

time complexity - speed efficiency when ip size grows.




*/

// liner Search

let arr = [1,2,3,4,5,5];
let target = 5;
// let position = -1;

// // linear search
// for (let i = 0 ; i<arr.length ; i++){
//     if (arr[i]==target){
//         position = i;
//         break;
//     }
// }
// console.log(position);

// binary search
let dest = -1;
let start = 0;
let end = arr.length-1;
while(start<=end){
    let mid  = start+Math.floor((end-start)/2);
if (target === arr[mid]){
    dest = mid;
    break;
    // start = mid+1;
}
else if (target >arr[mid]){
    start = mid+1;
}
else{
    end = mid-1;
}
}
console.log(dest);


// do you know the timecomplexity here  


let brr = [1,2,3,4,5,6,7];
// find the fifth element of an Array;
// create a function for it which return  the 5th element of an array;

function fun(arr , index){
    return arr[5];
    
}
console.log( fun(brr , 5));


// crete  a array which return double of it

function double(arr ){
    let resArr = [];
    for (let i = 0 ; i < arr.length ; i++){
        resArr.push(i*2);

    }
    return resArr;
}
double(brr);
console.log(double(brr));

