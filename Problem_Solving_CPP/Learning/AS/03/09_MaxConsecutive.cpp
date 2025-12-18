#include<iostream>
using namespace std;
#include<vector>


// max consucative number

// int maxCons(vector<int>nums){
//     int n = nums.size();
//     int count = 1;
//     int maxCount = 1;
//     for (int i = 1 ; i< n ;i++ ){
//         if (nums[i]==nums[i-1]){
//             count++;
//             maxCount = max(count , maxCount);
//         }
//         else{
//             count = 1;
//         }
//     }
//     return maxCount;
// }

// max consucative 1

int maxCons(vector<int>nums){
    int n = nums.size();
    int count = 0;
    int maxCount = 0;

    for (int i = 0 ; i< n  ; i++){
        if (nums[i]==1){
            count++;
        }
        else{
            count = 0;
        }
        if (count>maxCount){
            maxCount=count;
        }
    }
    return maxCount;
}


int main (){
    vector<int>nums = {1,0,1,1,1,0,1,};
    cout<<maxCons(nums);
}