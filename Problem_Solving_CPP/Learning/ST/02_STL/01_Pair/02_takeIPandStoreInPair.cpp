//  Take two integers as input, store them in a pair, and display the pair.

#include<iostream>
using namespace std;



int main(){
    int a = 5;
    int b = 7;
    pair<int , int>p = {a,b};
    cout<<p.first<<endl<<p.second;
}