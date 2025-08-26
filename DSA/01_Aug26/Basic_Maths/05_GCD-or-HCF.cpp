#include<iostream>
using namespace std;


// method 1  - using for loop
/*
int gcd(int n1, int n2){
    int gcd = 1;
    for (int i = 2 ; i < min(n1, n2) ; i++){
        if (n1%i==0 && n2%i == 0 ){
            gcd = i;
        }
    }
    return gcd;
}
*/


// method 2 - using while loop

int gcd (int n1 , int n2){
    while(n1>0&&n2>0){
        if (n1>n2){
            n1= n1%n2;
        }
        else{
            n2= n2%n1;
        }
    }
    return (max(n1,n2));
}


int main (){
    int n1 = 15;
    int n2 = 0;
    cout<<gcd(n1, n2);
}