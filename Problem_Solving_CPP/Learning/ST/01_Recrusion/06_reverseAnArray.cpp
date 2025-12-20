// reverse of array using recursion

#include<iostream>
using namespace std;

void rev(vector<int> &arr ){
    static int start = 0;
    static int end = arr.size()-1;
    if(start>end){
        return ;
    } 
    // swap(arr[start] , arr[end]);
    int temp  = arr[start];
    arr[start]= arr[end];
    arr[end]= temp;

    start++;
    end--;
    
    rev(arr);
}


int main (){
    vector<int>arr = {1,2,3,4,5};
    rev(arr);
    for (int i = 0 ; i < arr.size()  ; i++){
        cout<<arr[i]<<" ";
    }
}