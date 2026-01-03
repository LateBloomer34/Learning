#include<iostream>
using namespace std;

// find the last occurance of target;
int bs (vector<int> &arr , int target){
        int n = arr.size();

        int start = 0 ; 
        int end = n-1;

    int lastOccur = -1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if (target>=arr[mid]){
                lastOccur = mid ;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
return lastOccur;
}

int main (){
    vector<int>arr = {1,2,3,4,4,4,4,4,5,5,6,7};
    int target = 4;
    cout<<bs(arr, target);
}