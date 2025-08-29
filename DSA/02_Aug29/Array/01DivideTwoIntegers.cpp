#include<iostream>
using namespace std;

// divide two integers whithout using multiplication addition and modulus

int divison (int divident , int divisor){
    int count = 0;
    int sum = divisor;
    while(sum<=divident){
        count++;
        sum = sum +divisor;
    }
return count;
}

int main (){
    int divident = 15;
    int divisor = 3;
    cout<<divison(divident , divisor);    
}