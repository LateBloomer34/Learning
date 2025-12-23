// Reverse a vector without using the built-in reverse() function.



#include<iostream>
using namespace std;

int main (){
    vector<int>arr = {1,2,3,4,5};

    int start =0;
    int end = arr.size()-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // print the array


    for (auto i :arr){
        cout<<i<<" ";
    }
}