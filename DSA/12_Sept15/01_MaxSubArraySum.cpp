#include<iostream>
using namespace std;

// nost optimal is sliding window

int SubArraySum (vector<int>arr, int k ){
    int n = arr.size();
    int current = 0 ; 
    
    for (int i = 0 ; i < k ; i++){
        current = current +arr[i];
    }
    int maxSum = current;

    for (int i = 1 ; i <= n-k; i++){
        current = current-arr[i-1]+arr[i+k-1];
        if (current>maxSum){
        maxSum = current;
        }
    }
    
    return maxSum;
}


int main (){
    vector<int>arr = {3,8,2,5,7,6,12};
    int k = 4;
    cout<<SubArraySum(arr, k);
}