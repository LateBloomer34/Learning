// pair STL


// #include<iostream>
// #include <utility>
#include<bits/stdc++.h>
using namespace std;

void pairPractice(){
    pair<int, int >p = {8,9};
    cout<<"first element of pair is "<<p.first<<endl;
    cout<<"second element of pair is "<<p.second<<endl;


    // nested pair
    pair<int , pair<int,int>>p1 = {2,{6,8}};
    cout<<"first element of pair group is "<<p1.first<<endl;
    cout<<"first element of second  of pair is "<<p1.second.first<<endl;
    cout<<"second element of second  of pair is "<<p1.second.second<<endl;

    // pair in array

    pair<int , int>arr[] = {{9,8}, {7,6}, {5,4},{2,5}};
    cout<<"array second index first element is "<<arr[2].first<<endl;
    cout<<"array second index second element is "<<arr[2].second<<endl;

}


int main (){

    pairPractice();

    return 0;
}