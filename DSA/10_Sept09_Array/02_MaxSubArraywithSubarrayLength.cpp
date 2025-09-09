#include<iostream>
using namespace std;

int subArray(vector<int>arr){
    int n = arr.size();
    int sum = 0 ; 
    int maxSum = arr[0] ;

    int start = 0 ;
    int tempStart = 0 ;
    int end = 0 ;


    for (int i = 0 ; i < n ; i++){
        sum = sum +arr[i];
        if (sum > maxSum){
            maxSum = sum;
            start = tempStart;
            end = i;
        }
        if (sum<0){
            sum = 0 ;
            tempStart = i+1; 
        }
    }
    return (end - start +1);
}

int main (){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<subArray(arr);
}