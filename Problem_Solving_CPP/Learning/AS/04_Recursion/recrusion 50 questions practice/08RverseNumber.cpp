// Reverse a number
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// method 1 - baisc method
// int reverse(int num){
//     int revNum = 0;
//     while(num>0){
//     int rem = num%10;
//         revNum = revNum*10+rem;
//         num = num/10;
//     }
//     return revNum;
// }

// using recrusion

int digit (int num){
    if (num==0){
        return 0;
    }   
    return 1+(num/10);
}

int reverse(int num){
    if (num==0){
        return 0;
    }
    int count = digit(num)-1;
    
    return (num%10*(pow(10, count)))+reverse(num/10);
}


int main() {
   int num = 89677;
    cout<<reverse(num);
    return 0;
}