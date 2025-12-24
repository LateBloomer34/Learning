//Remove all duplicate elements from a sorted vector.

#include<iostream>
using namespace std;

int uniq(vector<int> &arr){
    int n = arr.size();
int j =0 ;
    for(int i = 0 ; i < n ; i++){
        if (arr[i]!= arr[j]){
            j++;
            swap(arr[i], arr[j]);
        }
        
    }
    return j;
}

int main (){
    vector<int>arr={1,2,3,3,4,4,5,6};
    int j = uniq(arr);
    for (int i = 0 ; i <=j ; i++){
        cout<<arr[i]<<" ";
    }
}