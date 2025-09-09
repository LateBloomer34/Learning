#include<iostream>
using namespace std ; 

int rearrange(vector<int>arr){
    int n = arr.size();
    vector<int>pos;
    vector<int>neg;


    // array elements splits into positive and negative
    for (int i = 0 ; i< n ; i++){
        if (arr[i]<0){ // if element is -ve store in neg arry
            neg.push_back(arr[i]);
        }
        else{ // if array elemet is positive store in pos array
            pos.push_back(arr[i]);
        }
    }
    if (neg.size()<pos.size()){
        for (int i = 0 ; i< neg.size() ; i++){
            arr[2*i] = pos[i];
            arr[2*i+1]= neg[i];
        }
        int index = 2*neg.size();
        for (int i = neg.size() ; i<pos.size() ; i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i = 0 ; i < pos.size() ; i++){
            arr[2*i]=pos[i];
            arr[2*i+1]= neg[i];
        }
        int index = 2*pos.size();
        for (int i = pos.size() ; i<neg.size(); i ++){
            arr[index]=neg[i];
            index++;
        }
    }

    for (int i =0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

int main (){
    vector<int>arr = {1,2,3,4,5,-1};
    rearrange(arr);
}