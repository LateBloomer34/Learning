//Access and print the first and last elements of a vector safely.


#include<iostream>
using namespace std;


int main (){
    vector<int>arr = {3,1,2,3,4,5,6,7};
    cout<< arr.front()<<endl;
    cout<< arr.back()<<endl;
}