#include<iostream>
using namespace std;

bool pelindromeCheck(int num){
    int orgNum = num;
    int revNum = 0 ;
    while(num>0){
        int rem = num%10;
        revNum = revNum*10+rem;
        num = num/10;
    }
    if (revNum == orgNum){
        return true;
    }
return false;
}

int main (){
      int num ; 
    cout<<"enter the number ";
    cin>>num;
   if( pelindromeCheck(num)){
    cout<<"peli";
   }
   else{
    cout<<"not peli";
   }
}