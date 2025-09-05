#include<iostream>
#include<vector>
using namespace std;

void lRotate(vector<int>& arr){
    int n = arr.size();
    int ele = arr[0];

    for (int i = 1 ; i < n ; i++){
        arr[i-1]=arr[i];
    }

    arr[n-1]=ele;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    lRotate(arr);
    for (int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}