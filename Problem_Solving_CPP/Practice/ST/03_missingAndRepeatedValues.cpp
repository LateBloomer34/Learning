// 2965. Find Missing and Repeated Values


#include<iostream>
using namespace std;

vector<int> missingRepeat(vector<vector<int>>arr){
    int n = arr.size();
    // vector<int>flat;
    int total = n*n;
    vector<int>freq( total+1 , 0);


    // for (int i = 0 ; i <n ; i++){
    //     for (int j = 0 ; j < arr[i].size() ; j++){
    //         flat.push_back(arr[i][j]);
    //     }
    
    for(int i = 0 ; i<n ; i++){
        for (int j = 0 ; j < n ; j++){
        freq[arr[i][j]]++;
        }
    }

    //find repeated and missing number
    int missing = -1 ;
    int repeated = -1;
    for(int i = 1 ; i <= freq.size() ; i++){
        if (freq[i]==0){
            missing = i;
        }
        if (freq[i]>=2){
            repeated = i;
        }
    }
  
    return {repeated, missing};
}


int main (){
    vector<vector<int>>arr = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int>result  = missingRepeat(arr);
    for(auto i:result){
        cout<<i<<" ";
    }
}