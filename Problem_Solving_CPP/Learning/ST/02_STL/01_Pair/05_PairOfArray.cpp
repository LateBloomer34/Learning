//Store n pairs of integers in an array and print all the pairs.
// user takes ip

#include<iostream>
using namespace std;

int main (){
    vector<pair<int , int>>arr;
    for (int i = 0 ;i < 4 ; i++){
        int x ;
        int y ;
        cout<<"enter teh first value of "<<i<<" th pair ";
        cin>> x;
        cout<<"enter teh second value of "<<i<<" th pair ";
        cin>> y;

        //push varibale inside the rray in form of variable
        arr.push_back({x,y});
    }
cout<<"result is"<<endl;
    for (int i = 0 ; i < 4 ; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}