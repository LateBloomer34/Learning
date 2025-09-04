#include<iostream>
using namespace std;

int NthRoot(int num , int n){
    int start  = 1 ;
    int end = num;

    while(start<=end){
        int mid = start+(end-start)/2;
        if (pow(mid, n)==num){
            return mid;
        }
        else if (pow(mid , n)<num){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main (){
    int n = 3;
    int num = 27;
   cout<< NthRoot(num , n);
}