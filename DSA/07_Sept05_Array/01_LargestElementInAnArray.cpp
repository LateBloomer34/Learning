// largest Element in an Array

#include<iostream>
using namespace std;

int largest(vector<int>arr){
    int n = arr.size();
    int largest = INT_MIN;

    for (int i = 0 ; i < n ; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main (){
    vector<int >arr = {2,5,1,3,0};
    cout<<largest(arr);
}