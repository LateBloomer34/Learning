#include<iostream>
using namespace std;

int freq(vector<int> &arr , int target){
    int n = arr.size();

    // if (n==0){
    //     return 0;
    // }

    int start = 0 ;
    int end = n-1;
    int lb = 0;
    while(start<=end){
        int mid = start+(end-start)/2;
        if (target<=arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    lb = start;

     start = 0 ;
     end = n-1;
     int ub = 0;
     while(start<=end){
        int mid = start+(end-start)/2;
        if (target>=arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    ub = start;
    return ub-lb;
}


int main (){
    vector<int>arr = {};
    int target = 1;
    cout<<freq(arr, target);
}