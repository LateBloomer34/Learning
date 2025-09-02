#include<iostream>
#include<vector>
using namespace std;

int find (vector<int>arr , int target){
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;

    while(start<=end){
        int mid = start+(end-start)/2;

        if (arr[mid]==target){
            return mid;
        }

        if (arr[start]<=arr[mid]){      // if left half sorted
            if (target>=arr[start] && target<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        else{   // if right half sorted
            if (target>arr[mid] && target<=arr[end]){
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
    vector<int>arr = {7,8,1,2,3,3,3,4,5,6}; // repeating elements
    int target = 5;
    cout<<find(arr , target);
}