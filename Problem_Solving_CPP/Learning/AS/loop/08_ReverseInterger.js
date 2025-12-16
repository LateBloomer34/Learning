// reverse Integer

function reverseNum (num){
    let sign = 1;
    if (num<0){
        sign = -1;
    }
    
    if (num === 0){
        return 0;
    }
    num = Math.abs(num);
    let revNum = 0;
    while( num>0){
        let rem = num%10;
        revNum = revNum*10 + rem;
        num = Math.floor(num/10);
    }
    return revNum*sign;
}

let num = -123;
let result = reverseNum(num);
console.log(result);


