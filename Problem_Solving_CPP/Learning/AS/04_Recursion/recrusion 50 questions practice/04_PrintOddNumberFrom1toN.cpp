// print odd number from 1 to n;


#include<iostream>
using namespace std;

void printOdd(int start , int end){
    if(start>end){
        return;
    }
    if (start%2 !=0){
        cout<<start<<" ";
    }
    return printOdd(start+1 , end);
}

int main (){
    int start = 11;
    int end = 30;
    printOdd(start,  end);
}