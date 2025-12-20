// fibonacci Numbers - fFibonacci numbers are a sequence of numbers where each number after the first two is the sum of the two preceding ones.

// Sequence starts like this:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34…


// problem  -  print first n fibonacci numbers
#include<iostream>
using namespace std;

void fibo(int first ,int second , int n){
    if (n<=0){
        return;
    }
    cout<<first<<" ";
    int temp  = second+first;
    first = second;
    second = temp;
    fibo(first , second  , n-1);
}

int main (){
    int first  = 0;
    int second  = 1;
    int n = 10;
    fibo(first , second, n);
}