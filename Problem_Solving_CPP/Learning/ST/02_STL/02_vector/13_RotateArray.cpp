// Rotate a vector to the left by k positions.


#include<iostream>
using namespace std;
// in this function i return an array
vector<int> rotate(vector<int> &arr, int k){
    int n = arr.size();

    vector<int>store(k);
    
    for (int i = 0 ; i < k ; i++){
        store[i]=arr[i];
    }
    for (int i = k ; i < n ; i++){
        arr[i-k]=arr[i];
    }

    for (int i = n-k ; i < n ; i++){
        arr[i] = store[i-(n-k)];
    }
    
    return arr;
    
}

int main (){
    vector<int>arr = {1,2,3,4,5,6};
    int pos = 2;
    vector<int> result = rotate(arr , pos);
      for(auto i:result){
        cout<<i<<" ";
    }
}