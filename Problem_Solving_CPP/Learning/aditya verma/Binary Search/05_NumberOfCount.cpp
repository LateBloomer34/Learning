// number of count of element in an array

#include<iostream>
using namespace std;
#include<vector>

int countEle  (vector<int> &arr , int target){
    int n = arr.size();

    if (n==0){
        return 0;
    }
    
    int start = 0 ;
    int end = n-1;

    int FOccur = -1; 
    int LOccur = -1;

    // find first occurance -
    while(start<=end){
        int mid = start+(end - start)/2;

        if (arr[mid] == target){
            FOccur = mid;
            end = mid-1;
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    // find Last occurance


    start = 0 ; 
    end = n-1;

    while(start<=end){
        int mid = start+(end-start)/2;

        if (arr[mid]== target){
            LOccur = mid;
            start = mid+1;
        }
        else if (target>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if (FOccur == -1){
        return 0;
    }

    return LOccur-FOccur+1;
}

int main (){
    vector<int>arr = {2, 4 , 10 , 10 , 10 , 15 , 20};
    int target = 3;
    cout<<countEle(arr , target);
}
