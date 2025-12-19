// Sum of digits of a number.

#include<iostream>
using namespace std;

// int factorial (int num){
//     if (num<=1){
//         return 1;
//     }
//     return num* sum(num-1);
// }


int sum(int n , int dgSum){
    
    if (n==0){
        return dgSum;
    }

    int rem = n%10;
    dgSum = dgSum+rem;
    n = n/10;

    return sum(n, dgSum);
   
}

int main (){
    int n = 2456;
    int dgSum = 0;
    // int n =10;
    cout<<sum(n, dgSum);
}