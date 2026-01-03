#include<iostream>
using namespace std;

int more(vector<int>&arr){
    int n = arr.size();

int curr = arr[0];
int maxCount = 0;
    for (int i = 0 ;i<n; i++){
        
        if (arr[i]== curr){
            maxCount++;
        }
        else{
            maxCount--;
        }
        if (maxCount<0){
            maxCount=1;
            curr = arr[i];
        }
    }
    return curr;
}

int main (){
    vector<int>arr = {3,1,1,1,2};
    cout<<more(arr);
}