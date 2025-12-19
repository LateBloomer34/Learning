// Reverse a number


#include<iostream>
using namespace std;


// normal method using while loop;

// int rev(int num){
// int revNum = 0;
// while(num>0){
//     int rem = num%10;
//     revNum = revNum*10+rem;
//     num = num/10;
// }
// return revNum;
// }

// recrusive method

// method 1 -

int count(int num){
    if (num==0){
        return 0;
    }
    return 1+ count(num/10);
}
    
int rev (int num){
    if (num==0){
        return 0;
    }
        int d  = count(num)-1; // fuction to count the digits in number

    return (num%10 * (pow(10 , d)))+rev(num/10);
}



// recrusive using static int variable - 
    // method 2

// int rev(int num){
//     static int revNum = 0; //Remembers its value between function calls;
    
//     if (num==0){
//         return revNum;
//     }
//     revNum = revNum*10+(num%10);


//     return rev(num / 10);
// }

int main (){
    int num = 8247;
    cout<<rev(num);
    // rev(num);
}