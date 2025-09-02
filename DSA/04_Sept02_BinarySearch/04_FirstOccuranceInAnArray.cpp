#include<iostream>
using namespace std;

int firstOccur(vector<int>arr , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;
    int ans = -1;

    while(start<=end){
        int mid = start +(end-start)/2;
        if (target==arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
return ans;
}

int main (){
    vector<int>arr = {3,4,13,13,13,20,40};
    int target = 0;
    cout<<firstOccur(arr , target);
}