#include<iostream>
using namespace std;

void fun(int &c ,int &d){
    c = c*2;
    d = d&2;
    cout<<"c"<<&c<<endl;
    cout<<"d"<<&d<<endl;

    return;
}

int main (){
    int a = 5;
    int b = 6;
    cout<<"a"<<&a<<endl;
    fun(a,b);
    cout<<"b"<<&b<<endl;
}