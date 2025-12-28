// reverse the array

#include<iostream>
using namespace std;

void reverse(vector<int> &arr ){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] =temp;
        start++;
        end--;
    }
}

int main (){
    vector<int>arr = {1,3,-1,5,6,7,3,5};
    reverse(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }
}