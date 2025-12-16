// waf that search for an element in array and return the index, if the element is not present then return -1;


let arr1 = [1,2,3,4,5,6,7];

function search (num){
    for(let i = 0 ; i< arr1.length ; i++){
        if (arr1[i]==num){
            return i;
        }
    }
    return -1;
}

console.log( search (3));
console.log( search (7));
console.log( search (9));