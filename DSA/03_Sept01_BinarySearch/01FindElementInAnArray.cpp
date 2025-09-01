#include<iostream>
using namespace std;

int BS(vector<int>arr  , int target){
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;
    if (arr[mid]== target){
        return mid;
    }
    else if (target<arr[mid]){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    }
    return -1;
}

int main (){
    vector<int>arr = {2, 5, 8, 12, 16, 23, 38};
    int target = 2;
    cout<<BS(arr , target);
}