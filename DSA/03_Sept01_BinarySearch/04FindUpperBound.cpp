#include<iostream>
using namespace std;

int UB(vector<int>arr  , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;
    int ans= -1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if (target>arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main (){
    vector<int>arr = {2,3,4,5,6,8};
    int target = 7;
    cout<<UB(arr , target);
}