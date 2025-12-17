// palindrome Check

function palindromeCheck(num){
    if (num<0){
        return false;
    }
    if (num>=0 && num<10){
        return true;
    }
    let orgNum   = num;
    let revNum = 0;

    while(num>0){
        let rem = num%10;
        revNum = revNum*10 +rem;
        num = Math.floor(num/10);
    }
    return (orgNum === revNum);
}

let num = 67576;

let result = palindromeCheck(num);

if (result){
    console.log(`${num} is pelindrome`);
}
else{
    console.log(`${num} is not pelindrome`);
    
}