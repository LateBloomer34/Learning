#include<iostream>
using namespace std;

//problem  - find the gcd of max and min element of an array


int gcd (vector<int>nums){
    // step 1 - find the smallest element of an array
    int n = nums.size();
    int minElement = INT_MAX;
    for (int i = 0 ; i < n ; i++){
        if (nums[i]<minElement){
            minElement = nums[i];
        }
    }
 
     // step 2 - find the largest element of an array
    int maxElement = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if (nums[i]>maxElement){
            maxElement = nums[i];
        }
    }

    // step 3 - find the gcd of largest & smallest element
    int gcd = 1;
        for (int i = 2 ; i <= min(maxElement, minElement) ; i++){
            if (maxElement%i==0 && minElement%i==0){
                gcd = i;
            }
        }
return gcd;
}


int main (){
    vector<int>nums = {2,5,6,9,10};
    cout<<gcd(nums);
}