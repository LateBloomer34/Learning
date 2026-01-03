// binary search- 
// always array is sorted;


#include<iostream>
#include<vector>
using namespace std;


int BS(vector<int>arr , int target){
    int n = arr.size();

    int start = 0 ;
    int end = n-1;

    while(start<=end){
        int mid  = start+(end-start)/2;
        
        if (arr[mid]== target){
            return mid;
        }
        else if (target>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int target = 100;
    cout<<BS(arr, target);// call
}
