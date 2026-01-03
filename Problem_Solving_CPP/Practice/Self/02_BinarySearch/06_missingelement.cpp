#include<iostream>
using namespace std;


int missing (vector<int>arr){
    int n = arr.size();


    int arrSum = 0;
    for (int i = 0 ; i < n ;i++){
        arrSum = arrSum ^arr[i];
    }
    int totSum = 0 ;
    for (int i = 1 ; i <=n+1 ; i++){
        totSum = totSum^i;
    }
    return totSum^arrSum;
}

int main (){

    vector<int>arr = {1,2,4,5};
    cout<<missing(arr);
}