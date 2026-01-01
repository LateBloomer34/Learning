//The order is unknown — it could be ascending or descending.


#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr , int target){
    int n = arr.size();
    int start = 0 ; 
    int end = n-1;

    if (n==0){
        return -1;
    }

    if (arr[start]<arr[end]){ // means array in descending order
    while(start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]== target){
            return mid;
        }
        else if (arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    }

    else{ // array in ascending order

        while(start<=end){
        int mid = start+(end-start)/2;
            if (arr[mid]== target){
                return mid;
            }
            else if (target>arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }
    return -1;
}


int main (){
    vector<int> arr = {7,1};
    int target = 1;
    cout<<search(arr , target);
}