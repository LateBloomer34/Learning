// count occurance of a number


#include<iostream>
using namespace std;

int occur (vector<int>arr  , int target , int index){
    if (index==arr.size()){
        return 0;
    }

    if (arr[index] == target){
        return 1 + occur(arr , target , index+1 );
    }
    else{
        return occur(arr , target , index+1 );
    }
}

// using map data Structure

// #include<unordered_map>
// int occur(vector<int>arr , int target , int index){
//     int n = arr.size(); 
//     unordered_map<int, int>m;

//     for (int i = 0 ; i< n  ; i++){
//         m[arr[i]]++;
//     }

//     return m[target];
// }

int main (){
    int target = 1;
    vector<int>arr = {1,2,3,1,2,1,1,3};
    cout<<occur(arr, target , 0);
}