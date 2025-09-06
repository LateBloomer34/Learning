#include<iostream>
using namespace std;

int sortArr(vector<int>arr){
    int n = arr.size();
    int start = 0 ;
    int mid = 0 ; 
    int end = n-1;
    
    while(mid<=end){
        if (arr[mid]==0){
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid]==2){
            swap(arr[mid], arr[end]);
            end--;
        }
        else{
            mid++;
        }
    }
    for (int i =0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main (){
    vector<int>arr = {2,0,2,1,1,0};
    sortArr(arr);
}