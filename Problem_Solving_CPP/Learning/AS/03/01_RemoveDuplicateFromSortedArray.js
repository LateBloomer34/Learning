let arr = [0,1,1,1,2,2,3,3,4];

function dupli(arr){
    let pointer = 0;
    for (let  i = 0; i< arr.length ; i++){
        if (arr[i]!= arr[pointer]){
            pointer++;
            arr[pointer]= arr[i]
        }
    }
    return pointer+1;
}
console.log( dupli(arr));