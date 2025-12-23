#include<iostream>
using namespace std;

void method(vector<int> &arr){
    // to access the first element of vector
    cout<<arr.front()<<endl;
    cout<<*arr.begin()<<endl; // using iterator

    // to access the last element of vector

    cout<<arr.back()<<endl;
    cout<<*(arr.end()-1)<<endl;

    // to delete somthing from array
    arr.erase(arr.begin()+1); // delete 1st index element

    for (auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // to delet mutiple things at a time

    arr.erase(arr.begin()+1 , arr.begin()+3);
    // delete element from 1st and 2 nd index; end address after the element;
    for (auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // insert element in an array

    arr.insert(arr.begin()+1 ,2 ); // insert a single element
    for (auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    //  to insert multiple element

    // arr.insert(arr.begin()+2 , 2,4); // add 4, 4 from index 2nd

    arr.insert(arr.begin()+2 , {3,4}); //add 3 & 4 element start from index 2
    for (auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;



}

int main (){
    vector<int>arr = {1,2,3,4,5,6};
    method(arr);
}