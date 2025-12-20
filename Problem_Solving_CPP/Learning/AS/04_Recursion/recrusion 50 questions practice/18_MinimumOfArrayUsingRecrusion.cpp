// min from an array


#include<iostream>
using namespace std;

int min (vector<int>arr){
    static int start = 0;
    static int end = arr.size()-1;
    static int minNum = INT_MAX;

    if (start>end){
        return minNum;
    }
    if (arr[start]<minNum){
        minNum = arr[start];
    }
    start++;
    return min(arr);
}

int main (){
    vector<int>arr = {1,0,2,4,9,-1};
    cout<<min(arr);
}