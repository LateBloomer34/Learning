#include<iostream>
using namespace std;

int rRotate(vector<int>arr , int d){
    int n = arr.size();
    vector<int>store(d);

    for(int i = n-d ; i<n ; i++){
        store[i-(n-d)]=arr[i];
    }

    for (int i = n-d-1 ; i>=0 ; i--){
        arr[i+d] =arr[i];
    }

    for (int i = 0  ; i< d ; i++){
        arr[i] = store[i];
    }

    for (int i = 0 ; i < n ; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}

int main (){
    vector<int>arr = {0,2,4,5,3,2,5,6,0};
    int d = 3;
    rRotate(arr , d);
}