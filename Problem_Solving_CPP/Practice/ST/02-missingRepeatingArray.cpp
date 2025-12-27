#include<iostream>
using namespace std;

pair<vector<int> , vector<int>> missingRepeat(vector<int>arr){
    int n = arr.size();

    vector<int>missing;
    vector<int>repeating;
    vector<int>result(*max_element(arr.begin() , arr.end()) , 0);

// 0,2,1,1,1,1

    for (int i = 0 ;i< n; i++){
        result[arr[i]]++;
    }

    for(int i = 1 ;i <result.size() ; i++ ){
        if (result[i]==0){
            missing.push_back(i);
        }
        else if(result[i]>1){
            repeating.push_back(i);
        }
    }
    return {missing , repeating};
}

int main (){
    vector<int>arr = {9, 3, 5, 2, 1, 1};
    pair<vector<int> , vector<int>> result = missingRepeat(arr);
    cout<<"missing"<<endl; 
    for (auto i:result.first){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"repeating"<<" "<<endl;
    for (auto i:result.second){
        cout<<i<<" ";
    }
    cout<<endl;
}