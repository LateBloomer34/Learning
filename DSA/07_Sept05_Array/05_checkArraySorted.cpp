#include<iostream>
using namespace std;

bool sorted(vector<int>arr){
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        if (arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main (){
    vector<int>arr = {1,2,7,4,5,6};
    if (sorted(arr)){
        cout<<"sorted array";
    }
    else{
        cout<<"not sorted";
    }
}