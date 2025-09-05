#include<iostream>
#include<vector>
using namespace std;

int missing(vector<int>arr){
    int n = arr.size();
    for (int i = 0 ;i < n-1; i++){
        if (arr[i]!=arr[i+1]-1){
            return arr[i]+1;
        }
    }
    return -1;
}

int main (){
    vector<int>arr = {1,3};
    cout<<missing(arr);
}