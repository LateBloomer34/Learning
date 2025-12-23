// list is same as vector, but it allow front operation as well, it is dynamic in nature

  
#include<iostream>
#include<list>
using namespace std;

void method(list<int>arr){
    // size of list -
    int n= arr.size();
    cout<<n<<endl;

    // first element of list
    cout<<arr.front()<<endl;
    // last lement of list
    cout<<arr.back()<<endl;
    // print the element of list

    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    // to remove element from last
    arr.pop_back();

    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // to remove element from first

    arr.pop_front();
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // to add element in last

    arr.push_back(3);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // to add element in first

    arr.push_front(0);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    
}

int main (){
    list<int>arr = {7,4,5,1,2,3,4,5,6};
    method(arr);  
}