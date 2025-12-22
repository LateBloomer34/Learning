#include<iostream>
using namespace std;


int main (){
    vector<pair<int , int>>arr = {{1,2} , {1,3} , {2,3},{2,1}, {4,5},{1,1}};


    sort(arr.begin(), arr.end());

//     for(auto p:arr){
// cout<<p.first<<" "<<p.second;
// cout<<endl;
//     }

for(int i = 0 ; i< arr.size() ; i++){
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
}
}