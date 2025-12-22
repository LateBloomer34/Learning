// nested pair


#include<iostream>
using namespace std;


int main (){
    pair<int, pair<int, int>>p = {1,{1,2}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}