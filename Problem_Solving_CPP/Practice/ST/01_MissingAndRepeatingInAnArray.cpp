//Missing and Repeating in an Array

#include<iostream>
using namespace std;

void missingRepeat(vector<int>arr){
    int n = arr.size();
    int missing = -1;
    int repeat = -1;
    vector<int>frequency(n+1 , 0);
    for (int i = 0 ; i < n; i++){
        frequency[arr[i]]++;
    }
// 4, 3, 6, 2, 1, 1
// freq - 0,2,1,1,1,0,1
    for (int i = 1 ; i<=n ; i++){
        if (frequency[i]==0){
            missing = i;
        }
        if(frequency[i]>1){
            repeat = i;
        }
    }
    cout<<missing<<"missing "<<endl;
    cout<<repeat<<" repeat"<<endl;
}


int main(){
    vector<int>arr = {4, 3, 5, 2, 1, 1};
    missingRepeat(arr);   
}