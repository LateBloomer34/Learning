#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>arr){
    int n = arr.size();
    int ele = arr[0];
    int count  = 0 ;
    for (int i =0 ; i< n ; i++){
        if (arr[i]==ele){
            count++;
            ele = arr[i];
        }
        else if (arr[i]!= ele){
            count--;
         }
        if (count < 1){
            count = 1;
            ele =arr[i];
        }
    }
    int maxCount = 0 ;
    for (int i = 0 ;i< n ; i++){
        if (arr[i]==ele){
            maxCount++;
        }
    }
    if (maxCount>n/3){
        return ele;
    }
        return -1;
}

int main (){
    vector<int>arr = {11,33,33,11,33,11};
    cout<<majority(arr);
}
