 // second largest number of an array


 let arr = [-2, -4 ,-1 , -3, -8, ,4];
 function secLar(arr){
    if (arr.length<2){
        return null;
    }
    let largest =Number.MIN_SAFE_INTEGER ;
    let secLar = Number.MIN_SAFE_INTEGER;
        for (let i = 0 ;i < arr.length ; i++){
            if (arr[i]>largest){
                secLar= largest;
                largest = arr[i];
            }
            else if (arr[i]>secLar && arr[i]<largest){
                secLar = arr[i];
            }
        }
        return secLar;
 }
let result =  secLar(arr);
console.log(result);


