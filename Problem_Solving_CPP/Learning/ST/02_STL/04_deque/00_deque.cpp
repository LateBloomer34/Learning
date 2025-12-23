#include<iostream>
using namespace std;


int main (){
    // decleration of dequeue - 
    deque<int>arr = {1,2,3,4,5};
     for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // access the first element of deque

    cout<<arr.front()<<endl;
    cout<<*arr.begin()<<endl;

    // access the last element of array
    cout<<arr.back()<<endl;
    cout<<*(arr.end()-1)<<endl;

    // add element in last;

    arr.push_back(1);
     for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    arr.emplace_back(2);
     for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    
    // add element in first
    
    arr.push_front(0);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    arr.emplace_front(-1);
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


    // remove element from first

    arr.pop_front(); 
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
}