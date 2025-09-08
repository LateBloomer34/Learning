#include<iostream>
#include<vector>
using namespace std;

int BuySell(vector<int>arr){
    int n = arr.size();

    int minPrice = arr[0] ;
    int maxProfit = 0;
   for(int i = 0 ; i<n ; i++){
        minPrice = min(minPrice , arr[i]);
        maxProfit = max(maxProfit , arr[i]-minPrice);
   }
   return maxProfit;
}

int main (){
    vector<int>arr = {7,4,5,3,6,14,1};
    cout<<BuySell(arr);
}