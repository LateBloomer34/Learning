#include<iostream>
using namespace std;

bool armstrong(int num){
    int count = 0 ; 
    int ogNum = num;
    int ogNum1 = num;
    while(num>0){
        count++;
        num = num/10;
    }
    int armNum = 0;
    while(ogNum>0){
        int rem = ogNum%10;
        armNum = armNum + pow(rem, count);
        ogNum = ogNum/10; 
    }
    
if(ogNum1== armNum){
    return true;
}
return false;
}

int main (){
    int num;
    cout<<"enter the number ";
    cin>>num;
   if( armstrong(num)){
    cout<<"number is armstrong";
   }
   else{
    cout<<"not armstrong";
   }
}

