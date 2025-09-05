#include<iostream>
#include<vector>
using namespace std;

int lRotate(vector<int>arr , int d){
    int n = arr.size();
    vector<int>store(d);
// move d element of arr array in store array
    for (int i = 0 ; i < d ; i++){
        store[i] =arr[i];
    }

    for(int i = d ; i < n ; i++){
        arr[i-d]=arr[i];
    }

    for(int i = n-d ; i<n ;  i++){
        arr[i] = store[i-(n-d)];
    }
    for (int i =0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main (){
    vector<int>arr = {0,1,2,3,4,5,6,7};
    int d = 3;
    lRotate(arr , d);
}