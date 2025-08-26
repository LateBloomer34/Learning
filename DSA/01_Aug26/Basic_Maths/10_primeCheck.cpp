#include<iostream>
using namespace std;

string primeCheck(int num){
    if (num<=1){
        return "not prime";
    }
    for (int i = 2 ; i <=sqrt(num) ; i++){
        if (num%i==0){
            return "not prime";
        }
    }
    return "prime";
}

int main (){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    cout<<primeCheck(num);
}