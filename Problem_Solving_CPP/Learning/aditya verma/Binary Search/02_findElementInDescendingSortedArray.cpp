// find element in descending sorted array


#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &arr , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;


    while(start<=end){
        int mid = start+(end-start)/2;


        if (arr[mid]== target){
            return mid;
        }

        else if (target<arr[mid]){
            start = mid+1;
        }
        else{
            end  = mid-1;
        }
    }
    return -1;
}

int main (){
    vector<int>arr = {20, 17, 15 , 14 , 13 , 12, 10 , 9, 6, 3};
    int target  = 3;
    cout<<search(arr , target);
}