// ForEach - it is a array method , which expect a callabck function as an argument .
// it call a proveded callback function once for each array element.
//  it takes element on by one; and retrun undefined;

// it can takes upto 3 InputDeviceInfo, where first input is number , second is index  and third is array
let arr = [10,20,30,40,50];
let sum = 0 ;
arr.forEach((num)=>{
    sum = sum+num;
})
console.log(sum);


const items = ["item1", "item2", "item3"];
let result = [];

items.forEach(function(ele){
    result.push(ele);
}) // it takes a callback function and return nothing 

// shortend  for above code
// => 
// items.forEach((ele) => result.push(ele));
console.log(result);

// example 2- 

[1, 2, 3].forEach(num => console.log(num));


let arr1 = [10,20,30];
// it can takes upto 3 InputDeviceInfo, where first input is number , second is index  and third is array
arr1.forEach(function(num , index, arr){
    arr[index] = num*2;
})

console.log("orignal array", arr1);


let ele = [1,2,3,4,5,6];
ele.forEach(function (num){
    console.log(num);
    
})

let arr2 = [9,8,7,6,5,4];
let sum1 = 0 ;
arr2.forEach((num1, index)=>{
    sum1 = sum1+num1;
    console.log(sum1, index);
    
})