// reverse Integer

#include<iostream>
using namespace std;

int reverse(int num){
    int revNum = 0;
    if (num ==0 ){
        return 0;
    }
    while(num>0 || num<0){
        int rem = num%10;
        revNum = revNum*10 + rem;
        num = num/10;
    }
    return revNum;
}

int main (){
    int num = 123;
    cout<<reverse(num);
}