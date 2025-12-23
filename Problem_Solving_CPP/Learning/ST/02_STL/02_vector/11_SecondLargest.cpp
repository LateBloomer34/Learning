// Find the second largest element in a vector.

#include<iostream>
using namespace std;

int secLargest(vector<int>arr){
    int n = arr.size();
    int lar = INT_MIN;
    int sec = INT_MIN;

    for(int i = 0 ; i < n; i++){
        if (arr[i]>lar){
            sec = lar;
            lar =arr[i];
        }
        else if(arr[i]>sec && arr[i]<lar){
            sec= arr[i];
        }
    }
    return sec;
}

int main (){
    vector<int>arr = {1,3,9,7,2,8,6};
    cout<<secLargest(arr);
}

