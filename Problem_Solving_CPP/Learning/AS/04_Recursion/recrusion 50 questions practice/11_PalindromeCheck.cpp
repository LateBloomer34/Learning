#include<iostream>
using namespace std;

bool peli(int num){
    static int org  = num;
    static int rev = 0;

    if (num==0){
        return rev==org;
    }

    rev = rev*10 + num%10;
    
    return peli(num/10);    
}


int main (){
    int num = 0;
    int result = peli(num);

    if(result){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}