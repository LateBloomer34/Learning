#include<iostream>
using namespace std;

int maxSubarraySum(vector<int>arr){
    int n = arr.size();
    int sum = 0;
    int maxSum = arr[0] ;
    for (int i = 0 ; i < n ; i++){
        sum = sum +arr[i];
        maxSum = max(sum , maxSum);
        if (sum<0){
            sum = 0 ;
        }
    }
    return maxSum;
}

int main (){
    vector<int>arr = {-10,-1,-4,-6};
    cout<<maxSubarraySum(arr);
}