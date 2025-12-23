#include<iostream>
using namespace std;


int main (){
    vector<int>arr;

    // to take ip from user
    for (int i = 0 ; i < 6 ; i++){
        int x;
        cout<<"enter the "<<i<<" th element";
        cin>>x;
        arr.push_back(x);

    }
    // print the element of array
    for (int i = 0 ; i < 6 ; i++){
        cout<<arr[i]<<" ";
    }
}

