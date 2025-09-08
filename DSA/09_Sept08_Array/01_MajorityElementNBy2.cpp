#include<iostream>
using namespace std ;


// brute approach - using nested loop
/*
int majority (vector<int>arr){
    int n = arr.size();
    for (int i = 0 ; i < n ; i++){
        int count = 0 ;
        for (int j = 0 ; j < n ; j++){
            if (arr[i]== arr[j]){
                count++;
            }
        }
        if (count>n/2){
            return arr[i];
        }
    }
    return -1;
}

*/

// optimal approach - moore's voting algo;

int majority(vector<int>arr){
    int n = arr.size();
    int count = 0;
    int ele = arr[0];
    for(int i = 0 ; i < n ; i++){
        if (arr[i]== ele){
            count++;
        }
        else{
            count--;
            if (count == 0){
                count = 1;
                ele = arr[i];
            }
        }
    }

    int totCount = 0;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]==ele){
            totCount++;
        }
    }
    if (totCount>n/2){
        return ele;
    }
    return -1;
}

int main (){
    vector<int>arr = {2,1,1,2,2,1,1,2,2};
    cout<<majority (arr);
}