// nested pair


#include<iostream>
using namespace std;


int main (){
    pair<int, pair<int, int>>p = {1,{1,2}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
    
    // other method

    // auto [a, inner] = p;
    // auto [b, c] = inner;

    // cout << a << " " << b << " " << c << endl;
}


