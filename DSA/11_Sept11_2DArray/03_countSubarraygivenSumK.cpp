#include<iostream>
#include<vector>
using namespace std;

int countSubarr(vector<int>arr, int k){
    int n = arr.size();
    int count = 0;
    
    for(int i = 0 ; i < n ;i++){
        int sum = 0;
        for (int j = i ; j < n ; j++){
            sum = sum +arr[j];
            if (sum ==k){
            count++;
            }
        }
    }
    return count;
}


int main (){
    vector<int>arr = {3,1,2};
    int k = 3;
    cout<<countSubarr(arr , k);
}