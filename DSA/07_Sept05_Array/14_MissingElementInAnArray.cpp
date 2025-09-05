#include<iostream>
#include<vector>
using namespace std;

// approches -
//  using summestion - diff between sum all number between first to last and  sum of all elment 
//using xor -  xor of all array element and xor of all element between first to last element
// chekc every element


// approach 1 
/*
int missing(vector<int>arr){
    int n = arr.size();
    for (int i = 0 ;i < n-1; i++){
        if (arr[i]!=arr[i+1]-1){
            return arr[i]+1;
        }
    }
    return -1;
}
*/

// approach 2 - using summation

int missing(vector<int>& arr){
    int n = arr.size();
    int sumEle = 0;
    for (int i = 0 ; i< n ;i++){
        sumEle = sumEle+arr[i];
    }
    int totSum = arr[n-1]*((arr[n-1]+1)/2);
    // use the formula of sum of n natural number
    n*(n+1)/2
    int missing = totSum-sumEle;
    return missing;
}



// aproach 3 - using XOR

/*
int missing(vector<int>arr){
    int n = arr.size();
    
    int eleXor = 0 ;
    for (int i = 0 ; i<n ; i++){
        eleXor = eleXor^arr[i];
    }
    
    int totXor = 0 ;
    for (int i = arr[0]; i<= arr[n-1]; i++){
        totXor = totXor^i;
    }
    int result = totXor^eleXor;
    return result;
}
*/


int main (){
    vector<int>arr = {1,2,4,5};
    cout<<missing(arr);
}