#include<iostream>
#include<vector>
using namespace std;

int minimum(vector<int> &nums){
    int n = nums.size();
    int start = 0 ;
    int end = n-1;
    int mini = INT_MAX;

    while(start<=end){
        int mid = start +(end-start)/2;


            // if whole segment sorted 
        if (nums[start]<= nums[end]){
            mini = min(mini, nums[start]);
                return mini;
        }

        // if left half sorted
        if (nums[start]<=nums[mid]){
            mini = min(mini , nums[start]);
            start = mid+1;
        }

        // if right half sorted
        else{
            mini= min(mini, nums[mid]);
            end = mid-1;
        }
    }
    return mini;
}

int main (){
    vector<int>nums ={3,1,2};
    cout<<minimum(nums); 
}