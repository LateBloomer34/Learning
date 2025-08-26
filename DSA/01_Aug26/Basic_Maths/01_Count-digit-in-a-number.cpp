#include<iostream>
using namespace std;

// Brute approach - divide method
/*
int countNum(int num){
    int count = 0 ;
    while (num > 0 || num<0){ // condition for bot -ve and +ve numbers
        count++;
        num  = num/10;
    }
    return count;
}
*/


// optimal approach - using log

int countNum(int num){
    int count = 0;
    if (num<0){
        num = num*-1;
    }
    count = log10(num)+1;  // to get exact result, otherwise it will give count-1;
    return count;
}

int main (){
    int num ; 
    cout<<"enter the number ";
    cin>>num;
   cout<< countNum(num);
}