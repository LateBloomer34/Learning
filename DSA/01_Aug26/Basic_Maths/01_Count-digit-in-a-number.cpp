#include<iostream>
using namespace std;

int countNum(int num){
    int count = 0 ;
    while (num > 0 || num<0){ // condition for bot -ve and +ve numbers
        count++;
        num  = num/10;
    }
    return count;
}

int main (){
    int num ; 
    cout<<"enter the number ";
    cin>>num;
   cout<< countNum(num);
}