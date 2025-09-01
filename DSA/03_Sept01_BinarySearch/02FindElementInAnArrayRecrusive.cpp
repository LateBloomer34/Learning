#include<iostream>
using namespace std;

int BS(vector<int>arr , int target , int start , int end){
    if (start>end){
        return -1;
    }
    int mid = start+(end-start)/2;
    if (arr[mid]==target){
        return mid;
    }
    else if (target<arr[mid]){
        return BS(arr , target,  start , mid-1);
    }
    else{
        return BS(arr , target,  mid+1, end);
    }
}

int main (){
    vector<int>arr = {2, 5, 8, 12, 16, 23, 38};
    int target = 11;
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;
    cout<<BS(arr , target,  start , end);
}