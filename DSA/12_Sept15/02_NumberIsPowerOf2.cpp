#include<iostream>
using namespace std;

bool sqr(int num){
    if (num>0&&((num & (num-1)) == 0)){
        return true;
    }
return false;
}


int main (){
    int num = 128 ; 
    if(sqr(num)){
        cout<<num<<" is power of 2";
    }
    else{
        cout<<num<<" is not power of 2";
    }
}