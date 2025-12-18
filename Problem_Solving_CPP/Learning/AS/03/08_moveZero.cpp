#include<iostream>
using namespace std;
#include<vector>

void moveZero(vector<int>&nums){
    int n = nums.size();
    int j = 0;
    for (int i = 0 ; i< n ; i++){
        if (nums[i]!=0){
            swap(nums[i] , nums[j]);
            j++;

        }
    }
    for (int i = 0 ; i<n ; i++){
        cout<<nums[i];
    }
}

int main (){
    // vector<int>nums = {0,1,0,3,12};
    vector<int>nums = {1,2,0,0,1,0,3,12,0};
    moveZero(nums);
}