// first and last occurance of an element

#include<iostream>
using namespace std;
#include<vector>

pair<int, int> occur(vector<int> &arr , int target){
    int n = arr.size();

    if (n==0){
        return {-1, -1};
    }

    int FOccur = -1;
    int LOccur = -1;

    int start = 0;
    int end = n-1;

// find first occurance - 
    while(start<=end){
        int mid = start+(end- start)/2;

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

    // find last occu

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
    return {FOccur , LOccur};
}

int main (){
    vector<int>arr = {3,3,3,4,5};
    int target = 3;
    pair<int , int>result = occur(arr , target);

    cout<<"first occur:- "<<result.first<<endl;
    cout<<"second occur:- "<<result.second<<endl;
    
}