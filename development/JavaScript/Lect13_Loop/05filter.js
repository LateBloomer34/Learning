// filter ethod is same as ForEAch method but it is use for filter the array based on the condition.

// it always return a new array


let arr = [1,2,3,4,5];
const result = arr.filter(function(num){
    return num%2==0;
    
})
console.log(result);

console.log(arr);


let arr1 = [
    {name:"rohan" , age:25 , marks:60},
    {name:"mohan" , age:25 , marks:50},
    {name:"sohan" , age:25 , marks:70},
    {name:"gohan" , age:25 , marks:30},
    {name:"tohan" , age:25 , marks:40},
]
const res = arr1.filter(function(obj){
    return obj.marks>40;
})

console.log(res);


// if result value is true put insert that value in resultant array;


// filter the even number and store square of it

const arr2 = [1,2,3,4,5,6];
const res2 = arr2.filter(function(num){
         return num%2==0
}).map((num)=> num*num); 
console.log("res2", res2);
