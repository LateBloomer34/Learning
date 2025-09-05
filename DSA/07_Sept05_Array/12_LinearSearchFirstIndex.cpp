#include<iostream>
using namespace std;

int lSearch(vector<int> & arr , int target ){
    int n = arr.size();
    for (int i =0 ;i < n ; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main (){
    
    vector<int>arr = {5,4,3,2,2,1};
    int target = 2;
    cout<<lSearch(arr, target);
}