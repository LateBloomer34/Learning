#include<iostream>
using namespace std;
#include<vector>

int singleNum(vector<int>nums){
    int n = nums.size();
    int missing = 0;
    for(int i = 0 ; i <n ; i++){
        missing = missing^nums[i];
    }
return missing;
}

int main (){
    vector<int>nums = {4,1,2,2,1};
    cout<<singleNum (nums);
}