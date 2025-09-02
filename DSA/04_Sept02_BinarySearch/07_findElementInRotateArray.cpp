#include<iostream>
using namespace std;
#include<vector>

int ele(vector<int>arr , int target){
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;

    while(start<=end){
        int mid = start +(end-start)/2;
        if (arr[mid]==target){
            return mid;
        }
        
        if (arr[start]<arr[mid]){       // if lest part is sorted
            if (target>=arr[start] && target<=arr[mid]){
                end = mid-1;
         }
         else{
            start = mid+1;
         }
        }
        else{   // if right part sorted (arr[mid]<arr[end])
            if (target>=arr[mid] && target<= arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main (){
    vector<int>arr = {4,5,6,7,0,1,2,3};
    int target = 5;
    cout<<ele(arr , target);
}