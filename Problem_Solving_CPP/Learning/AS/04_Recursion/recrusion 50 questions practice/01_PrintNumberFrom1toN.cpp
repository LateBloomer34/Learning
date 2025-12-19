// print 1 to n using recruison

#include<iostream>
using namespace std;

int print (int n){
    if (n>10){
        return 0;
    }
   cout<<n<<" ";
    return print(n+1);
}

int main (){
    int n = 1;
    print(n);
}