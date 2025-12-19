// Reverse a number
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// reverse a number using recrusion method 1 -

// int digit (int num){
//     if (num==0){
//         return 0;
//     }   
//     return 1+digit(num/10);
// }

// int reverse(int num){
//     if (num==0){
//         return 0;
//     }
//     int count = digit(num)-1;
    
//     return num%10*(pow(10, count)) + reverse(num/10);
// }

// reverse a number using recrusion method 2- 



int reverse(int num){
    static int rev = 0;
    if (num ==0){
        return rev;
    }
    rev = rev*10+(num%10);
    return reverse(num/10);
}



int main() {
   int num = 89677;
    cout<<reverse(num);
    return 0;
}