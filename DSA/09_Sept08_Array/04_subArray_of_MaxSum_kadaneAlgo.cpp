#include<iostream>
#include<vector>
using namespace std;

int subArray(vector<int>arr){
    int n = arr.size();
    int sum = 0 ;
    int maxSum = 0 ;

    int start = 0 ;  // temp start
    int left = 0 ;      // final start pointer
    int right = 0 ;     // final end pointer

    for (int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
        if (sum>maxSum ){
            maxSum = sum; // maxSum = max(sum , maxSum)
            left = start;    // mark left pointer as start
            right = i;      // mark right pointer at i , if maxSum increse
        }
       
        if (sum < 0){
            sum = 0 ;
            start = i+1;
        }
        
    }
return (right-left+1);

}

int main (){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<subArray(arr);
}