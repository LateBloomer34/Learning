#include<iostream>
#include<vector>
using namespace std;

int secSmallest(int arr[] , int n  ){
    int smallest = INT_MAX;
    int secSmall = INT_MAX;
    for (int i =0 ; i < n ; i++){
        if (arr[i]<smallest){
            secSmall = smallest;
            smallest = arr[i];
        }
        else if (arr[i]<secSmall && secSmall >smallest){
            secSmall = arr[i];
        }
    }
    return secSmall;
}

int main (){
    int arr[] = {1,9,4,7, 2,7,5};
    int n = sizeof arr / sizeof arr[0];
    cout<<secSmallest(arr, n);
}