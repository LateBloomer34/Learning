#include<iostream>
using namespace std;

int ub(vector<int>&arr , int target){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        int mid = start+(end-start)/2;

        if (target>=arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return start;
}

int main (){
    vector<int>arr = {1,2,2,2,3,3,4,6,7};
    int target = 7;
    cout<<ub(arr, target);
}