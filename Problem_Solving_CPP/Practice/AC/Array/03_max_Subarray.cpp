// maximum subArraySum

#include<iostream>
using namespace std;

int maxSubArray(vector<int>arr){
    int n = arr.size();

    int sum = 0;
    int maxSum = 0;

    for (int i = 0 ; i < n ; i++){
        sum = sum+arr[i];
        maxSum = max(maxSum , sum);
        if (sum <0){
            sum = 0;
        }
    }
    return maxSum;
}

int main (){
    vector<int>arr = {5,4,-1,7,8};
    cout<<maxSubArray(arr);
}