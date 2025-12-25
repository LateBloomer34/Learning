#include<iostream>
#include<list>
using namespace std;


int main (){
    list<int>li = {1,12,3,4};
    int n = li.size();
   
    
    // print the list
    // for (auto i = li.begin(); i <= li.end(); i++){
    //     cout<<*i<<" ";
    // }
    cout<<*li.begin()+1;
    // for (auto i :li){
    //     cout<<i<<" ";
    // }
    cout<<endl;
}