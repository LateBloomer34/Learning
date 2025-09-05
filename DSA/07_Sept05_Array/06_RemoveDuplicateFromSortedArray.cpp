#include<iostream>
using namespace std;

int RemDupli(vector<int> &arr){
    int n = arr.size();
    int i = 0 ;
    for (int j = 0 ; j < n  ;j++){
        if (arr[i]!=arr[j]){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    return i;
}

int main (){
    vector<int>arr = {1,1,2,2,2,3,3, 4,7};
    int res = RemDupli(arr);
    for (int i = 0 ; i <=res  ; i++){
        cout<<arr[i]<<" ";
    }
}