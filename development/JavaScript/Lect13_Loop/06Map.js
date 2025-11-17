// map 

let arr = [1,2,3,4,5];
let res = arr.map(function(num, index){
    if (index%2==0){
    return num = num*2;
    }
    else{
        return num;
    }
})
console.log(res);

console.log(arr);

let arr1 = [1,2,3,4,5];
let res1 = arr1.map(function(num){
    return num = num*2;
});
console.log("res1", res1);


// filter the even number and store the square of that numebr
const arr2 = [1,2,3,4,5,6];
const res2 = arr2.map(function(num){
    if (num%2==0){
        return num*num;
    }
    else{
        return num;
    }
})
console.log("res2", res2);
