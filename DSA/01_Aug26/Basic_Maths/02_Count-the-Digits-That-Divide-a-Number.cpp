#include<iostream>
using namespace std;

int countNum(int num){
    int orgNum = num;
    int count = 0 ;
    while(num>0){
        int rem = num%10;
        num = num/10;
        if (orgNum%rem==0){
            count++;
        }
    }

    return count;
}

int main (){
    int num ; 
    cout<<"enter the number ";
    cin>>num;
    cout<< countNum(num);
}