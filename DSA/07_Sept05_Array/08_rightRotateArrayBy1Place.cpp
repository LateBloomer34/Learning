#include<iostream>
using namespace std;

int rRotate(vector<int>& arr){
    int n = arr.size();
    int lastEle = arr[n-1];
    for(int i = n-2 ; i>=0 ; i--){
        arr[i+1]= arr[i];
    }
    arr[0]=lastEle;
    return 0;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    rRotate(arr);
    for (int i = 0 ; i< arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}