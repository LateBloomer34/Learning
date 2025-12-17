#include<iostream>
using namespace std;

int remDupli(vector<int> &arr){
    int j = 0;
    for (int i = 0 ; i<arr.size() ; i++){
        if(arr[i]!=arr[j]){
            j++;
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0 ; i<=j ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return j+1; 
}

int main (){
    vector<int>arr = {0,1,1,1,2,3,3,4,4,5};
    cout<<remDupli(arr)<<" unique element in given array";
}