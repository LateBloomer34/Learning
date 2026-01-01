// find element in a sorted array

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr ,int target){
    int n = arr.size();

    int start = 0 ; 
    int end  = n-1;

    while(start<=end){
        int mid = start+(end-start)/2;

        if (arr[mid] == target){
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
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int target = 8;
    cout<<search(arr, target);
}