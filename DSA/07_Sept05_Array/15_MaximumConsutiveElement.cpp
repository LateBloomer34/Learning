#include<iostream>
using namespace std;

int maxCons(vector<int>arr){
    int n = arr.size();
    int maxCount = 1;
    int count = 1;
    for (int i = 0 ; i < n-1 ; i++){
        if (arr[i]==arr[i+1]){
            count++;
            maxCount = max(maxCount, count);
        }
        else{
            count=1 ;
        }
    }
    return maxCount;
}

int main (){
    vector<int>arr = {1,1,0,0,0,0,0,0,0,1,1,1};
    cout<<maxCons(arr);
}