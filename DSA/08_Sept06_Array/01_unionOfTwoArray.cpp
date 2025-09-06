#include<iostream>
#include<vector>
using namespace std;

int unionArr(vector<int>arr1 , vector<int>arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int>uni = {};
    int i = 0 ;
    int j = 0;

    while(i<n && j<m){
        if (arr1[i]<=arr2[j]){
        if (uni.empty() || uni.back()!= arr1[i]){
            uni.push_back(arr1[i]);
        }
        else{
            i++;
        }
        }
        else{
            if(uni.empty() || uni.back()!=arr2[j]){
                uni.push_back(arr2[j]);
            }
            else{
                j++;
            }
        }
    }
    // if no of element in arr1 is more than arr2
    while(i<n){
        if (uni.empty() || uni.back()!=arr1[i]){
            uni.push_back(arr1[i]);
        }
        i++;
    }
    // if arr2 element is more than arr2
    while(j<m){
        if (uni.empty() || uni.back()!=arr2[j]){
            uni.push_back(arr2[j]);
        }
        j++;

    }
    for(int i = 0 ; i<uni.size() ; i++){
        cout<<uni[i]<<" ";
    }
return 0;
}

int main (){
    vector<int>arr1 = {1,2,3,4,5,5,5,6,7};
    vector<int>arr2 = {2,9};
    unionArr(arr1 , arr2);
}