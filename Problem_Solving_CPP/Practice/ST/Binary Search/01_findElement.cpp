#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> &arr , int target){
    int n = arr.size();

    int start = 0 ;
    int end = n-1;

    while(start<=end){
        int mid = start+(end-start)/2;

        if (target== arr[mid]){
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
    vector<int>arr = {1,2,3,4,5,6,6,7};
    int target = 71;
    cout<<find(arr, target);
}
