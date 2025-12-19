// print 1 to n using recruison

#include<iostream>
using namespace std;

int print (int n, int dest){
    if (n>dest){
        return 0;
    }
   cout<<n<<" ";
    return print(n+1, dest);
}

int main (){
    int n = 1;
    int dest = 10;
    print(n, dest);
}