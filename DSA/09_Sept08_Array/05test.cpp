#include<iostream>
using namespace std;

int subArray(vector<int>arr){
    int n = arr.size();
    int sum = 0 ;
    int maxSum = 0 ;

    int start = 0;
    int left = 0 ;
    int right = 0;
for (int i = 0 ; i < n ; i++){
    sum = sum +arr[i];
    if (sum>maxSum){
        maxSum = sum;
        left = start;   // mark left as start
        right = i;      // right is the current index
    }

    if (sum<0){
        sum = 0;
        start = i+1; // if sum goes to <0 , start pointer is the next index
    }
}
return (right-left +1);
}

int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<subArray(arr);
}