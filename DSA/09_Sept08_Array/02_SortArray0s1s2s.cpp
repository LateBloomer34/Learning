#include<iostream>
using namespace std;
#include<vector>

int sort (vector<int> &arr){
    int n = arr.size();
    int start = 0 ;
    int mid = 0 ; 
    int end = n-1;

   while(mid<=end){
        if (arr[mid]==0){
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid]==2){
            swap(arr[mid], arr[end]);
            end--;
        }
        else{
            mid++;
        }
    }
   
    return 0;
}

int main (){
    vector<int>arr  = {2,1,0,2,1,0,0,1};
    sort(arr);
      for (int i =0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}