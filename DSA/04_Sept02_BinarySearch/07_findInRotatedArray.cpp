#include<iostream>
#include<vector>
using namespace std;

int ele (vector<int> &arr , int target){
    int n = arr.size();
    int start = 0 ;
    int end = n-1;


    while(start<=end){
        int mid = start+(end-start)/2;

        if (arr[mid]==target){
            return mid;
        }
            // if left part is sorted
  
        if(arr[start]<=arr[mid]){   
                if (target >=arr[start] && target< arr[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
               // if right part sorted
        else{
                if (target>arr[mid] && target<=arr[end]){       
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
    return -1;
}

int main (){
    vector<int>arr = {4,5,6,7,0,0,1,2,3};
    int target = 0;
    cout<<ele(arr , target);
}