#include<iostream>
#include<vector>
using namespace std;

int rotate(vector<int> &arr){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;
    int mini = INT_MAX;

    while(start<=end){
        int mid = start +(end-start)/2;

        // if array is sorted
        if (arr[start]<=arr[end]){
            mini  = min(mini , arr[start]);
            return mini;
        }
        // if left half sorted
        if (arr[start]<=arr[mid]){
            mini = min(mini , arr[start]);
            start = mid+1;
        }
        // if right part is sorted
        else{
            mini  = min(mini , arr[mid]);
            end = mid-1;
        }
    }
    return mini;
}

int main (){
    vector<int>arr = {4,5,6,7};
    cout<<rotate(arr);
}