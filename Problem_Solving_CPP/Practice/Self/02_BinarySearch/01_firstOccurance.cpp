#include<iostream>
using namespace std;

// find the first occurance of target;
int bs (vector<int> &arr , int target){
        int n = arr.size();

        int start = 0 ; 
        int end = n-1;

    int firstOccur = -1;
        while(start<=end){
            int mid = start+(end-start)/2;

            if (target<=arr[mid]){
                firstOccur = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }
return firstOccur;
}

int main (){
    vector<int>arr = {1,2,3,4,4,4,4,4,5,5,6,7};
    int target = 5 ;
    cout<<bs(arr, target);
}