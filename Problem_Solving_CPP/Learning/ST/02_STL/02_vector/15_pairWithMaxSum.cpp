// Given a vector of pairs (x, y), find the pair with the maximum x + y.


#include<iostream>
using namespace std;

pair<int, int> max(vector<pair<int , int>> &arr){
    int n = arr.size();

    int max = INT_MIN;
    pair<int, int>result;

    for (int i = 0 ; i < n ; i++){
        int sum = arr[i].first+ arr[i].second;
        if (sum>max){
            max = sum;
            result = {arr[i].first , arr[i].second};
        }
    }
    return result;
}

int main (){
    vector<pair<int , int>>arr = {{1,6},{3,4},{7,2},{5,1},{7,9}};
    // print the vector of pair
    // for(auto i:arr){
    //     cout<<i.first<<" "<<i.second;
    //     cout<<endl;
    // }
    pair<int, int>result = max(arr);
    cout<<result.first<<" "<<result.second;
}