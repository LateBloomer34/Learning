// Merge two vectors into a single vector.


#include<iostream>
using namespace std;

vector<int> merge(vector<int> &arr1 , vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int>result;
    int i = 0 ;
    int j = 0;
    while(i<n && j <m){
        if (arr1[i]<=arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
        else{
            result.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
            result.push_back(arr1[i]);
            i++; 
    }
    while(j<m){
        
            result.push_back(arr2[j]);
            j++;
    }
   return result;

}

int main (){
    vector<int>arr1 = {1,2,3,4};
    vector<int>arr2 = {2,3,5};
    vector<int>result =  merge(arr1 , arr2);
    for (auto i:result){
        cout<<i<<" ";
    }
}