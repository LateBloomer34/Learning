#include<iostream>
using namespace std;

int floor(vector<int> arr , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1 ; 
    int ans = -1; 


    while(start<=end){
        int mid = start +(end-start)/2;

        if (target>=arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main (){
    vector<int>arr = {10,20,30,40,50};
    int target = 55;
    cout<<floor(arr , target);
}