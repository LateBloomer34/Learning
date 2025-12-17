#include<iostream>
using namespace std;

int secLar(vector<int>arr){
    int largest = INT_MIN;
    int secLar = INT_MIN;

    if (arr.size()<2){
        return secLar;
    }
    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i]>largest){
            secLar = largest;
            largest = arr[i];
        }
        else if (arr[i]>secLar && arr[i]<largest){
            secLar= arr[i];
        }
    }
return secLar;
}


int main (){
    // int arr[] = {1,2,3,4,5,6,7};
    vector<int>arr = {1,5,9,5,2,6,8};
    cout<<secLar(arr);
}