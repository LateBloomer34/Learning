// maximum subarray sum

#include<iostream>
using namespace std;

int maxSubSum(vector<int> &arr , int k){
    int n = arr.size();
    if(n<k){
        return -1;
    }
    int current_sum = 0;
for (int i = 0 ; i < k ; i++){
    current_sum = current_sum+arr[i];
}
    int maxsum = current_sum;  
for (int i = k; i < n; i++){
    current_sum = current_sum + arr[i] - arr[i-k];
    maxsum = max(maxsum , current_sum);
}
return maxsum;
}

int main (){
    vector<int>arr = {2,1,5,1,3};
    int k = 3;
    cout<<maxSubSum(arr , k);
}