#include<iostream>
using namespace std;

void print(int start  , int end){
    if (start>end){
        return;
    }
    if (start%2==0){
        cout<<start<<" ";
    }
    return print(start+1 , end);
}

int main(){
    int start = 1;
    int end = 10;
    print (start , end);
}