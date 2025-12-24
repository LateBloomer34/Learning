#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main (){
    vector<int> arr;
cout<<arr.size()<<endl;
// quest1 -  Insert an element at the beginning of a vector.

arr.insert(arr.begin() , 1);
cout<<"Insert an element at the beginning of a vector."<<endl;
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;

// 2- Insert multiple elements at a specific position.
cout<<"Insert multiple elements at a specific position."<<endl;
arr.insert(arr.begin()+1 , {2,3,4,55});
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;
cout<<arr.size()<<endl;

// 3- Remove the last element of a vector.
arr.pop_back();
cout<<"Remove the last element of a vector."<<endl;
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;


// 4- Remove an element from a specific position.
cout<<"Remove an element from a specific position from index, 1 & 2"<<endl;
arr.erase(arr.begin()+1 , arr.begin()+3);
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;


// 5-Resize a vector to a larger size with default values.
cout<<"Resize a vector to a larger size with default values."<<endl;
arr.resize(8); // change the size of array , new slots fill with 0;
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;
// 6- Resize a vector to a smaller size and observe changes.

arr.resize(3);
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;


// 7-Access the first and last element using `.front()` and `.back()`.
cout<<"first element of array"<<endl;
cout<<arr.front()<<endl;
cout<<*arr.begin()<<endl;

cout<<"last element of an array"<<endl;
cout<<arr.back()<<endl;
// using itertaor
auto it = arr.end();
--it;
cout<<*it<<endl;

cout<<"add element in the last of array"<<endl;
arr.push_back(3);
arr.emplace_back(5);
arr.insert(arr.end() , {4,6,3,2,8});
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;


//8 - sort the vector in ascending order

cout<<"sort the vector in ascending order"<<endl;
sort(arr.begin() , arr.end()-1);
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;

// 9. Sort a vector in descending order.
cout<<"Sort a vector in descending order"<<endl;
sort(arr.rbegin() , arr.rend());
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;

// 10- Reverse the vector elements.
reverse(arr.begin() , arr.end());
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;


// 11-  Find the maximum and minimum elements using `maxelement` and `minelement`.

cout<<"max element of an vector"<<" ";
auto max = max_element(arr.begin() , arr.end());
cout<<*max<<endl;

cout<<"min element of vector ";
auto min = min_element(arr.begin() , arr.end());
cout<<*min<<endl;


// 12 - Count the occurrence of a particular element.
cout<<"count the occurance ";
auto occ = count(arr.begin() , arr.end()-1 , 3);
cout<<occ<<endl;

// 13-Remove all duplicate elements from a sorted vector.
cout<<"Remove all duplicate elements from a sorted vector."<<endl;
auto it1 = unique(arr.begin()  , arr.end());
arr.erase(it1, arr.end());
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;

//15-  Use `emplace` and `emplace_back` to add elements efficiently.

arr.push_back(2);
cout<<"array after emplace back"<<endl;
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;

cout<<"array after emplace front"<<endl;
// arr.emplace_front(0);// it is not woking in vector , working in list
arr.emplace(arr.begin()+2 , 9);
for (auto i :arr){
    cout<<i<<" ";
}
cout<<endl;
}