#include<iostream>
using namespace std;

void reverse(vector<string> & arr){
    int start = 0 ;
    int end = arr.size()-1;

    while(start<end){
        string temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main (){
    vector<string>arr = {"ram" , "name" , "shyam" , "kaam"};
    reverse(arr);
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}