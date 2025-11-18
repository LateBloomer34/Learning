let arr = [1,2,3,4,5];
let sum = 0 ;
let result = arr.reduce(function (num){
     sum = sum+num;
    return sum;
})
console.log(result);
console.log(arr);

console.log(typeof result);