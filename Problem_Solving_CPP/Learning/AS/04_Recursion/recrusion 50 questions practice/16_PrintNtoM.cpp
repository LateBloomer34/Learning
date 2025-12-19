#include<iostream>
using namespace std;

int print (int m , int n){
    if (n<m){
        return 0;
    }

    cout<<n<<" ";

    return print(m, n-1);
}

int main (){
    int m = 5; 
    int n  = 16;
    print(m , n);
}