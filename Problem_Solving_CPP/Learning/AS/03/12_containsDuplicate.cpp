
#include<unordered_set>
#include<iostream>
using namespace std;

bool dupli(vector<int>nums){
    int n = nums.size();
    // method 1 -  using nested loop


    // for (int i = 0 ;i < n-1 ; i++){
//     for (int j = i+1 ; j< n ; j++){
//         if (nums[i]== nums[j]){
//             return true;
//         }
//     }
// }


// method 2 - using sorting;

    // sort the array and check every element with his next or previous element , if. current and next or previous are same , return true 

    // sort(nums.begin() , nums.end());

    // for (int i = 0 ; i< n-1 ;i++){
    //     if (nums[i]== nums[i+1]){
    //         return true;
    //     }
    // }


    // method 3- using set data structure;

    // set store unique elements only, check for set if current element is present in set or not, if present return true;

    unordered_set<int>s;
        for(int i  = 0; i< n ; i++){
            if (s.count(nums[i])>0){
                return true;
            }
            s.insert(nums[i]);
        }


return false;
}

int main (){
    vector<int>nums = {1,2,3};
    int result = dupli(nums);

    if (result){
        cout<<"duplicate found";
    }
    else{
        cout<<"duplicate not present";
    }
}