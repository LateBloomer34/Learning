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

        // if duplicte present in an array 
        if (arr[start] == arr[mid] && arr[mid] == arr[end]) {
                start++;
                end--;
            }

        else if (arr[start]<=arr[mid]){      // if left half sorted
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
    vector<int>arr = {1,0,1,1,1,1,1,1}; // repeating elements
    int target = 0;
    cout<<find(arr , target);
}