// decleration of pair 

// prob1 -Create a pair<int, int> and print its first and second values.


#include<iostream>
using namespace std;

int main (){
    // synatx for decleration  of a pair
    pair<int , int>p = {11,2};

    // acessing the element of pair
    // access the first element of pair
    cout<<p.first<<endl;

    // access the second element of pair

    cout<<p.second<<endl;

    pair<char , string> p1 = {'1',"pair"};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;


    // nested pair


    pair<int , pair<int , int>> p2= {1,{2,3}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;

   pair<pair<int , pair<int , int>> , pair<int , int>> p3= {{1,{11,12}},{20,21}};
    cout<<p3.first.second.second<<endl;

}


