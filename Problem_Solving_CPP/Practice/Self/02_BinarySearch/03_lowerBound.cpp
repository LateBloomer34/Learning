// lowe bound and upper bound;


// 1 2 3 3 3 3 3 3 5 6 

// lower bound  - fisr occurbce of the element , or if element is not prese nt in that array , it will return just greater element that target element.

// lb - 3 - 2
// lb -4 - 8


// upper bound - target -3 - 8
// upper bound of 2 - 2

#include<iostream>
using namespace std ;

int lb(vector<int> &arr , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;


    int mid =0;

    while(start<=end){
         mid = start+(end-start)/2;
        if (target<= arr[mid]){
            end= mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return start;
}

int main (){
    vector<int>arr = {1,2,3,3,3,5,6};
    int target = 4;

    cout<<lb(arr , target);
}