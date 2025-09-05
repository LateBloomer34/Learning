#include<iostream>
using namespace std;

int secondLar(vector<int>arr){
    int largest = -1;
    int secLar = -1;
    int n = arr.size();
    for (int i = 0 ; i < n ; i++){
        if (arr[i]>largest){
            secLar = largest;
            largest = arr[i];
        }
        else if (arr[i]>secLar && arr[i] <largest ){
            secLar = arr[i];
        }
    }
return secLar;
}

int main (){
    vector<int >arr = {1};
    cout<<secondLar(arr);
}