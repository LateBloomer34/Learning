//Compute the prefix sum of a vector.


#include<iostream>
using namespace std;


vector<int> prefixSum(vector<int> &arr){
    int n = arr.size();
    // create a vector to store prefix sum;

    vector<int>pSum(n);
    
    // for  first element;
    pSum[0] = arr[0];

    // for rest element
    for (int i = 1 ; i< n ; i++){
        pSum[i]= arr[i]+arr[i-1];
    }
    return pSum;

    // we can also solve this problem directly modify theoriganl array , which saves our memory  and give us space complexity of O(1);
}

int main (){
    vector<int>arr  = {5, -2, 7, 0, 3};
    vector<int>result = prefixSum(arr);
    for(auto i :arr){
        cout<<i<<" ";
    }
    cout<<endl;
     for(auto i :result){
        cout<<i<<" ";
    }
}