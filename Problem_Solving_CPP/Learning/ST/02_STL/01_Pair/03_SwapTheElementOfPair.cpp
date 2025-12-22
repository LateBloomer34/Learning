// Swap the first and second elements of a given pair<int, int>.

#include<iostream>
using namespace std;


int main (){
    pair<int, int >p  = {1,2};
    // let a = pair.first;
    // let b = pair.second;
    cout<<"first element of pair is"<<p.first<<endl;
    cout<<"second element of pair is"<<p.second<<endl;

    int temp = p.first ; 
    p.first = p.second;
    p.second = temp;

    cout<<"first element of pair is after swaping"<<p.first<<endl;
    cout<<"second element of pair is after swaping"<<p.second<<endl;


}