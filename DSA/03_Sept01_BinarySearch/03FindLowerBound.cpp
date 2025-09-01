#include<iostream>
using namespace std;

// lower bound - if element present , return that index , otherwise return the index of just greater element than target

int lb (vector<int>arr , int target){
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if (target>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return start;
}

int main (){
    vector<int>arr = {2,3,4,6,7,8};
    int target = 5;
    cout<<lb(arr , target);
}