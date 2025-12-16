// problem 1 - waf that search for an element in array and return the index, if the element is not present then return -1;



function search (arr1 , num){
    for(let i = 0 ; i< arr1.length ; i++){
        if (arr1[i]==num){
            return i;
        }
    }
    return -1;
}

let arr1 = [1,2,3,4,5,6,7];
console.log( search (arr1 , 3));
console.log( search (arr1 , 7));
console.log( search (arr1 , 9));


// problem 2 -WAF that return the number of -ve number in an array


let arr = [1,-2,-3,-4,-1, 1,3,4,-9];

function negCount(arr ){
    let count = 0 ;
    for(let i = 0 ; i < arr.length ; i++){
        if (arr[i]<0){
            count++;
        }
    }
    return count;
}

console.log("total negative number in that array is " , negCount(arr));


// prob 3 -  largest number of an array


let arr2 = [1,3,5,9,14,4,8,2];

function largest(arr2){
    let largest = Number.MIN_SAFE_INTEGER;

    for (let i = 0 ; i < arr2.length ; i++){
        if (arr2[i]>largest){
            largest = arr2[i];
        }
    }
    return largest;
}

console.log("min element of the arr2 is " , largest(arr2));


// console.log(-Infinity);
// console.log(Infinity);
// console.log(Number.MAX_SAFE_INTEGER);
// console.log(Number.MIN_SAFE_INTEGER);

