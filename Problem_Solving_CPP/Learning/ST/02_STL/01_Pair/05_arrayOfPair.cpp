// Store n pairs of integers in an array and print all the pairs.


#include<iostream>
using namespace std;

int main (){
    pair<int, int >a = {1,2};
    pair<int, int >b = {3,4};
    pair<int, int >c = {5,6};
    pair<int, int >d = {7,8};

    vector<pair<int , int>>arr = {a,b,c,d};
     for (int i = 0; i < arr.size() ; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }

    // vector<pair<int, int>>arr = {{1,2}, {3,4},{5,6},{7,8}};
    //  for (int i = 0; i < arr.size() ; i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }
}