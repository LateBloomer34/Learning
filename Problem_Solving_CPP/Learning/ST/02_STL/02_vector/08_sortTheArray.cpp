// Sort a vector in ascending order and then in descending order.


#include<iostream>
using namespace std;

void sortArrAsc(vector<int> &arr){
    int n = arr.size();

    for (int i = 0 ; i < n ; i++){
        for (int j = i ; j <n ; j++ ){
            if (arr[j]<arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void sortArrDec(vector<int> &arr){
    int n = arr.size();

    for (int i = 0 ; i < n ; i++){
        for (int j = i ; j <n ; j++ ){
            if (arr[j]>arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main (){
    vector<int>arr = {1,2,4,2,6,2};
    sortArrAsc(arr);
    for(auto i :arr){
        cout<<i<<" ";
    }
    cout<<endl;
    sortArrDec(arr);
    for(auto i :arr){
        cout<<i<<" ";
    }
}