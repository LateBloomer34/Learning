#include<iostream>
using namespace std;

int main(){
    pair<int , int>p1 = {5,4};
    pair<int , int>p2 = {13,4};

    // comparospn of two pair - we can directly compair two pair just by comparison opertaor , 
    // in pair comparison , first it will look forst first element of both element, if first element is greater of any element that pair is greatest, 
    // if first element of both pair is equal , it will comapir the second element of both pair

    if(p1>p2){
        cout<<"pair 1 is greater";
    }
    else if (p2>p1){
        cout<<"pair 2 is greater";
    }
    else{
        cout<<"both are equal";
    }

}