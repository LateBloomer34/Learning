#include<iostream>
#include<vector>
using namespace std;


// brute approach  - linear search - O(n)

/*
int singleEle(vector<int>arr){
    int n = arr.size();
    int singleEle = -1;
    for (int i = 1 ; i < n-1 ; i++){
        if (arr[i]!=arr[i-1]&& arr[i]!=arr[i+1]){
            singleEle = arr[i];
        }
    }
return singleEle;
}
*/

// method -2 brute approach , using XOR
/*
int singleEle(vector<int>arr ){
    int n = arr.size();
    int answer=0;
    for (int i = 0 ; i < n  ; i++){
        answer = answer^arr[i];
    }
    return answer;
}
*/

// optimal approach - using Binary search O(log n)
int singleEle(vector<int>arr){
    int n = arr.size();
    
    // basic condition check => edge cases
    if (n==1){
        return arr[0];
    }
    if (arr[0]!=arr[1]){
        return arr[0];
    }
    if (arr[n-1]!=arr[n-2]){
        return arr[n-1];
    }


    int start = 1;
    int end = n-1;

    while(start<=end){
        int mid = start+(end-start)/2;
        // condition 1 - if mid is unique
        if (arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        // for left half
        if(mid%2==0 && arr[mid]==arr[mid+1] || mid%2==1 && arr[mid]==arr[mid-1] ){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
return -1;
}



int main (){
    vector<int>arr  = {1,1,2,2,3,3,4,4,5,6,6};
    cout<<singleEle(arr);
}