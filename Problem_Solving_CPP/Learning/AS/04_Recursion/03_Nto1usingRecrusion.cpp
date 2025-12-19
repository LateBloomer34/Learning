// print n to 1 using recrusion


#include<iostream>
using namespace std;

int print (int n){
    if (n==0){
        return 0;
    }
    cout<<n<<" ";

   // Avoid passing n-- because the value of n decreases after the function call. Instead, we can use --n.

//    we can use 

    // n= n-1;
    // return print(n);

    // or

    return print(n-1);
}

int main(){
    int n = 10;
    print(n);
}