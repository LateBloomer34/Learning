#include<iostream>
using namespace std;

void fibo (int n , int f , int s){
    if (n<=0){
        return ;
    }
    cout<<f<<" ";
    int temp = f+s;
    f= s;
    s = temp;
    fibo(n-1, f,s);
}

int main(){
    int n = 10;
    int f = 0;
    int s = 1;
    fibo(n, f, s);

}