#include<iostream>
using namespace std;

int count(vector<int>arr, int target){
    int freq = 0 ;
    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i]== target){
            freq++;
        }
    }
    return freq;
}

int main (){
    vector<int> arr = {1,2,3,4,1,2,1,5,6};
    int target  = 2;
    cout<<count(arr, target);
}