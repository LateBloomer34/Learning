// maximum second value in a vector

#include<iostream>
using namespace std;


int main (){
     vector<pair<int , int>>arr = {{1,2} , {1,3} , {2,5},{2,9}, {4,2},{1,0}};

     int max = INT_MIN;
    pair<int, int>result; /// crete a pair to stroe result
     for (int i = 0 ;i < arr.size() ; i++){
        if (arr[i].second>max){
            max = arr[i].second;
            result = arr[i]; // store max value in pair
        }
     }
     cout<<result.first<<" "<<result.second;

     
}