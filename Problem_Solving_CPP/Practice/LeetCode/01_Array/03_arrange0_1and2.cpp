// Arrange 0 ,1 and 2

#include<iostream>
using namespace std;

void arrange(vector<int>&arr){
    int n = arr.size();

    int start = 0 ;
    int end = n-1;
    int mid = 0;

    while(mid<end){
        if (arr[mid]==0){
            swap(arr[mid], arr[start]);
            start++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else if (arr[mid]==2){
            swap(arr[mid], arr[end]);
            end--;
        }
    }
}

int main (){
    vector<int>arr = {1,0,2,1,0,2};
    arrange(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
}