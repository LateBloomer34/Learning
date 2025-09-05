#include<iostream>
using namespace std;

int maxCons(vector<int>arr){
    int n = arr.size();
    int maxCount = 0;
    int count = 0;
    for (int i = 0 ; i < n-1 ; i++){
        if (arr[i]==1){
            count++;
            maxCount = max(maxCount, count);
        }
        else{
            count=0 ;
        }
    }
    return maxCount;
}

int main (){
    vector<int>arr = {1, 0, 1, 1, 0,0,0,0,0,0,0,0, 1};
    cout<<maxCons(arr);
}