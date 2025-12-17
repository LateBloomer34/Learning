#include<iostream>
using namespace std;

bool palindrome(int num){
    int orgNum = num;
    int revNum = 0 ;

    if (num<0){
        return false;
    }
    if (num<10 && num>=0){
        return true;
    }

    while(num>0){
        int rem = num%10;
        revNum = (revNum*10)+rem;
        num = num/10;
    }
    if (orgNum==revNum){
        return true;
    }
    return false;

}

int main (){
    int num = 67576;
    int result = palindrome(num);
    if (result ){
        cout<<"number "<<num<<" is pelindorme";
    }
    else{
        cout<<"number "<<num<<" is not pelindorme";
    }

}