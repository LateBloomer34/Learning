#include<iostream>
using namespace std;
#include<vector>

int occurence(vector<int>arr , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;
    int firstOccur = -1;
    int lastOccur = -1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if (target==arr[mid]){
            firstOccur = mid;
            end = mid-1;
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    start = 0 ; 
    end = n-1;

    while(start<=end){
        int mid = start +(end-start)/2;
        if (target==arr[mid]){
            lastOccur = mid;
            start = mid+1;
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return (lastOccur-firstOccur+1);
}

int main (){
    vector<int>arr = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int target = 3;
    cout<<occurence(arr , target);
}