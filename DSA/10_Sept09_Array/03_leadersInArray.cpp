#include<iostream>
using namespace std;

int leaders(vector<int>arr ){
    int n = arr.size();
    vector<int> result;
    int leaderEle = arr[n-1];
    result.push_back(arr[n-1]); // coz last elemet is always the leader element

    for (int i = n-2; i >=0 ; i--){
        if (arr[i]>leaderEle){
            result.push_back(arr[i]);
            leaderEle = arr[i];
        }
    }
for (int i =result.size()-1 ; i >=0 ; i--){
    cout<<result[i]<<" ";
}
return 0;
}

int main (){
    vector<int>arr = {10, 22, 12, 3, 0, 6};
    leaders(arr);
}