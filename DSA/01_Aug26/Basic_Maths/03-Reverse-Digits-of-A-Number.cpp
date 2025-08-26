#include<iostream>
using namespace std;

int reverseNum(int num){
    int rem = 0 ;
    long long revNum = 0;
    while(num!=0){
        rem = num%10;
        revNum = (revNum*10 + rem);
        num = num/10;
    }
   
    // if (revNum > INT_MAX || revNum < INT_MIN) {
    //             return 0;
    //         }        //statement for special condition mention on leetcode (if num is greater or minmum than INT_MAX AND INT_MIN) 
    return revNum;
}

int main (){
    int num ; 
    cout<<"enter the number ";
    cin>>num;
    cout<< reverseNum(num);
}