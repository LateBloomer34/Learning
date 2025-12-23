#include<iostream>
using namespace std;

void print(vector<int>arr){
    int n =arr.size();

    //method 1- using for loop

    for (int i= 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // method 2 - using iterator

    for (auto i = arr.begin() ; i<arr.end() ; i++){
        cout<< *(i)<<" ";
    }
    cout<<endl;

    // using for each loop

    for(auto i : arr){
        cout<< i<<" ";
    }
    cout<<endl;

    for (auto i = arr.front() ; i<=arr.back() ; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main (){
    vector<int>arr = {1,2,3,4,5,6};
    print(arr);
}