#include<vector>
#include<iostream>
using namespace std;


// method 1 - using addition and sub

// int missing(vector<int>nums){
//     int n = nums.size();
//     int eleSum = 0;
//     // sum of elements of an array
//     for (int i = 0 ; i < n ; i++){
//         eleSum = eleSum+nums[i];
//     }
//     // totalSum

//     int totSum = n*(n+1)/2;
//     int miss = totSum - eleSum;
//     return miss;
// }

// optimal - using exor

int missing(vector<int>nums){
    int n = nums.size();
    int totExor = 0;
    int eleExor = 0;
    for(int i = 0 ;i <n; i++){
        eleExor = eleExor^nums[i];
    }
    for (int i = 1 ;i <=n ;i++){
        totExor = totExor^i;
    }
    int missingEle = eleExor^totExor;
    return missingEle;
}
int main(){
vector<int>nums = {0,1,3};
cout<<missing(nums);
}