
// 442. Find All Duplicates in an Array

#include<iostream>
using namespace std;

vector<int> dupli(vector<int>nums ){
    int n = nums.size();
    vector<int>result;
    for (int i = 0 ; i < n ; i++){
        int index = abs(nums[i])-1;

        if (nums[index]<0){
            result.push_back(index+1);
        }
        else{
            nums[index]= -nums[index];
        }

    }
    return result;
}


int main (){
    vector<int>nums = {4,3,2,9,9,2,3,1};
    vector<int> resu = dupli(nums);
    for(auto i : resu){
        cout<<i<<" ";
    }
}