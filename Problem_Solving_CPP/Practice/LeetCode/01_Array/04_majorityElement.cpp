#include<iostream>
#include <vector>   
using namespace std;

int majority (vector<int> &arr){
    int n = arr.size();
    int majo = arr[0];
    int count = 0 ;
    for (int i = 1 ; i < n ; i++){
        if(arr[i] == majo){
            count++;
        }
        else{
            count--;
        }
        if (count<0){
            count = 0 ;
            majo = arr[i];
        }
}
return majo;
}

int main (){
    vector<int>arr = {2,2,2,1,1};
    cout<<majority(arr);
}