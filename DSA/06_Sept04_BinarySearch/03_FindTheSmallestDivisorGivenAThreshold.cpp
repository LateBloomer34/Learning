#include<iostream>
#include<vector>
using namespace std;

// brute approach

int smallestDivisor(vector<int>arr , int n , int limit){
    int result = 0;
    for (int i = 1 ; i < *max_element(arr.begin(), arr.end()) ; i++){
        int sum =0 ;
        for (int j = 0 ; j < n ; j++){
           sum = sum + ceil((double) arr[j]/i);// double is use for floating number into decimal
        }
        if (sum<=limit){
            result = i;
            return result;
        }
    }
    return result;
}

int main (){
    vector<int>arr = {1,2,3,4,5};
    int n = 5; // size of an array
    int limit = 8;
    cout<<smallestDivisor(arr  , n , limit);
}