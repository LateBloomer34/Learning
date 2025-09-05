#include<iostream>
using namespace std;

int smallest(vector<int>arr){
    int smallest = INT_MAX;
    int n = arr.size();
    for (int i =0 ; i < n ; i++){
        if (arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main (){
    vector<int >arr = {2,5,1,3,10};
    cout<<smallest(arr);
}

