#include<iostream>
using namespace std;

// insert position - if ele present return index , otherwise return nearest larger element 
// Pre-requisite: Lower Bound 
int insertEle(vector<int>arr , int target){
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;
    int ans = n; // default: insert at end

    while(start<=end){
        int mid = start+(end-start)/2;
        if (target<arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main (){
    vector<int>arr = {1,2,4,7};
    int target = 6;
    cout<<insertEle(arr , target);
}