#include<iostream>
using namespace std;

int subarraySum(vector<int>arr, int target){
   int n = arr.size();
   int left = 0 ;
   int right = 0 ; 
   int maxLen = 0 ;
   int sum = arr[0];
   while(right<n){
       if (sum==target){
           maxLen = max(maxLen , right-left+1);
       }
       right++;
        if (right<n){
        sum = sum+arr[right];
        }
       
    while(left<=right && sum>target){
           sum = sum-arr[left];
           left++;
        }
   }
return maxLen;
}

int main (){
    vector<int>arr = {2,3,5,1,0,0,0,0,0,0,9,0,1,2,7};
    int target = 10;
    cout<<subarraySum(arr, target);
}