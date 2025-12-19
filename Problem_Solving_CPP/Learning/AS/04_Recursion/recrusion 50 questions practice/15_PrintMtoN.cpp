//Print Number from M to N;


#include<iostream>
using namespace std;


int print(int m , int n){
    if (m>n){
        return 0;
    }
    cout<<m<<" ";

    return print(m+1 , n);
}

int main (){
    int m = 5;
    int n = 10;
    print(m  , n);
}