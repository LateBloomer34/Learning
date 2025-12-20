// factorial of n numbers

#include<iostream>
using namespace std;

int fact(int num){
    if (num==0){
        return 1;
    }
    return  num*fact(num-1);
}

int main (){
    int num = 7;
    cout<<fact(num);
}
// 10! = 10*9!
// 9! = 9*8!