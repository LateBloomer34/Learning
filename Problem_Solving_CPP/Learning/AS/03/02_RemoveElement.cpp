#include<iostream>
using namespace std;

int remove(vector<int>nums , int val){
    int n = nums.size();
    int j = 0;
    for (int i = 0 ; i<n ; i++){
        if (nums[i]!= val){
            swap(nums[i], nums[j]);
            j++;
        }
    }
    // for (int i = 0 ; i < n ; i++){
    //     cout<<nums[i]<<" ";
    // }
return j;
}

int main (){
    vector<int>nums = {3,2,2,3};
    int val = 2;
    cout<<remove(nums , val);
}