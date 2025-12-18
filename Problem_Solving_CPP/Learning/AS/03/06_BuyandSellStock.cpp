#include<iostream>
#include<vector>
using namespace std;

int MaxProfits(vector<int> &prices){
    int n = prices.size();
    int minPrice =  prices[0];
    int maxProfit = 0;

        for (int i= 0 ;i < n ; i++){
            if (prices[i]<minPrice){
                minPrice = prices[i];
            }
            int profit = prices[i] - minPrice;
            if (profit>maxProfit){
                maxProfit = profit;
            }
        }

        // short method

        // for (int i = 0 ; i < n ; i++){
        //             minPrice = min(minPrice, prices[i]);
        //             maxProfit = max(maxProfit, prices[i]-minPrice);
        //         }

return maxProfit;
}

int main (){
    vector<int>prices = {7,1,5,3,6,4};
    cout<<MaxProfits(prices);
}