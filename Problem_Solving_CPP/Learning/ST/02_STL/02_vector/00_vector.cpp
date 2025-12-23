#include<iostream>
using namespace std;


int main (){
    // decleartion of vector

    // vector<dataType of element> arr = {};

    // 1- vector of interger;

    vector<int>arr = {1,2,3,4,5,6};
    for (int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<char>arr1 = {'a', 'b', 'c' , 'd'};
    for (int i = 0 ; i < arr1.size()  ; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(auto i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<arr.front()<<endl; //access first element of vector
    cout<<arr.back()<<endl; // access last element of array
    cout<< *arr.begin()<<endl; // access first element of array using iterator
    cout<< *arr.rbegin()<<endl; // access last element of aray using iterator
    
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // add element in an arary in last position

    arr.push_back(1);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    // remove element from last
    arr.pop_back();
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // another way to add element in last

    arr.emplace_back(2);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // crete a vector of a fixed size

    vector<int>brr(5, 100);
    for (auto i:brr){
        cout<<i<<" ";
    }
    cout<<endl;



}