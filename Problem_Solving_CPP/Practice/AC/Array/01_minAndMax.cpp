// max and min

#include<iostream>
using namespace std;

pair<int, int> minAndMax(vector<int>arr){
    int n = arr.size();

    int minEle = INT_MAX;
    int maxEle = INT_MIN;

    for (int i = 0 ; i<n ; i++){
        if (arr[i]>maxEle){
            maxEle = arr[i];
        }
        if (arr[i]<minEle){
            minEle = arr[i];
        }
    }
    return {maxEle , minEle};
}

int main (){
    vector<int>arr = {1,3,-1,5,6,7,3,5};
    pair<int, int>result = minAndMax(arr);
    cout<<"max ele is "<<result.first<<endl;
    cout<<"min ele is "<<result.second<<endl;
}