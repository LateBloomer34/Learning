let num = 256;

function countDigit(num){
    let count = 0;

    if (num<0){
        num = num*-1;
    }
    while(num>0){
        count++;
        num = Math.floor(num/10);
    }
    return count;
}

let result = countDigit(num);
console.log(result);
