#include<iostream>
using namespace std;

int fun (int n , int m ){
    int result = 1;
    for (int i = 1; i <= m ; i++){
        result  = result*n;
    }
    return result;
}

int main (){
    int n = 3 ;
    int m = 7;
// cout<<pow(3,7)<<endl;
    cout<<fun(n, m );
}