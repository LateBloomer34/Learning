#include<iostream>
using namespace std;

int main (){
    vector<int>arr= {8,4,9,2,1};
    arr.pop_back();
    for (auto i :arr){
        cout<<i<<" ";
    }
    cout<<endl;
}