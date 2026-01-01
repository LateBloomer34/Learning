#include<iostream>
#include<vector>
using namespace std;

pair<int, int> occurance(vector<int> &arr , int target){
    int n = arr.size();
    int first = -1;
    int last = -1;
    if (n==0){
        return {-1, -1};
    }

    int start = 0;
    int end = n-1;

    // to find first occurance

    while(start<=end){
        int mid = start+(end-start)/2;

        if (target==arr[mid]){
            first = mid;
            end= mid-1; // check for left side, is there any target element present.
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    // to find last occurance :- 
    
        start = 0;
        end = n-1;

        while(start<=end){
            int mid = start+(end-start)/2;

            if (target==arr[mid]){
                last = mid;
                start = mid+1; // check for right side, is there any target element present.
            }
            else if (target<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        return {first , last};
}

int main (){
    vector<int>arr = {3};
    int target = 3;
    pair<int , int>result =  occurance(arr , target);
    cout<<"first occurance:- "<<result.first<<endl;
    cout<<"last occurance:- "<<result.second<<endl;
    cout<<"hello";
}