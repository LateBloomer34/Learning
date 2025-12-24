// set conatiner - set store in sorted order and store unique

// set -  sorted + unique

#include<iostream>
#include<set>
using namespace std;

int main (){
    vector<int>arr = {1,2,1,2,6,5,3,4,5};
    int n = arr.size();
    for (int i =  0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // creation of set
    set<int>s;
    
    // let we have few element to store inside set
    s.insert(1);
    s.emplace(4);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    // in above 5 case - first it will store 1 , than 4 , when 2 comes it store 2 after 1  , thn move to next statement and insert 3 ; coz set always stores in sorted form
    // after that it will look for 4 , but 4 is already present inside set , so it will skip that and move to next statement;



    for (auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;


    // store array element in set fro unique and sorted
    set<int>s1;

    for (int i = 0 ;i<n ; i++){
        s1.insert(arr[i]);
    }

    for (auto i:s1){
        cout<<i<<" ";
    }
    cout<<endl;


// important stemenet - 
// to add element - setName.insert(element)
//         or       setName.emplace(element)

// to print first element of set

cout<<*s.begin()<<endl;
// cout<<s.front()<<endl; // no working

// to print last element of set

cout<<*(s.rbegin())<<endl;
// using end () - 
auto it2 = s.end();
--it2;
cout<<*it2<<endl;

// to print last element of set


// to find element in set
cout<<"find"<<endl;
auto it  = s1.find(3);
cout<<*it<<endl;

auto it1 = s1.find(5);
cout<<*it1<<endl;
// if element not present it will return set.end();

// to earse the value from set

s1.erase(5);

auto it3 = s1.find(5);
cout<<*it3<<endl; // 5 is not present so it wil resturn s1.end(); 


// to check element is present or not inside set

int available = s1.count(4);
cout<<available<<endl;

int avai = s1.count(5);
cout<<avai<<endl;

// if element present return 1 else 0;  
// why it return 1 - coz set is unique and sorted, so every element is present only 1 time ;

auto it4 = s1.lower_bound(2);
cout<<*it4<<endl;


set<int>se = {1,5,7,9,11};
for(auto i:se){
    cout<<i<<" ";
}
cout<<endl;
}