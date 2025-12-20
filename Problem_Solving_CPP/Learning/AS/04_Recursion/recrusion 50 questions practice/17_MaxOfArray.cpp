#include<iostream>
using namespace std;

int mini (vector<int> & arr){
    static int start = 0;
    static int end = arr.size()-1;
    static int max = INT_MIN;
    if (start>end){
        return max;
    }
    if(arr[start]>max){
        max = arr[start];
    }
    start++;
    return mini(arr);
    // return max;
}

int main (){
    vector<int>arr = {-1, 6, 9};
    cout<<mini(arr);
}