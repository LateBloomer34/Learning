#include<iostream>
using namespace std;


// brute approch - linear search
/*
int sqrt(int num){
    int result = 1;
    for (int i = 1; i*i <= num ; i++){
        if (num%i==0){
            result = i;
        }
    }
    return result;
}
*/

// optimal approach

int sqrt(int num){
    int start = 1 ;
    int end = num;
    int result = 1;
    while(start<=end){
        int mid = start+(end-start)/2;

        if (mid*mid<=num){
            result = mid;  // store value in result variable
            start= mid+1;  //move right (try bigger)
        }
        else{
            end = mid-1;  //move left (try lower)
        }
    }
    return result;
}

int main (){
    int num = 36;
    cout<<sqrt(num);
}