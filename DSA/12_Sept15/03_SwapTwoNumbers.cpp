#include<iostream>
using namespace std;


// using XOR
int swapNum(int a , int b ){
    a = a^b ;
    b = a^b;
    a = a^b;
    cout<<"a is "<<a;
    cout<<"b is "<<b;
return 0;
}

int main(){
    int a = 5 ;
    int b = 10;
    swapNum(a,b);
}