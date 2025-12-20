// sum of elements of an array

#include<iostream>
using namespace std;

int sum (vector<int>arr){
    int static index = 0;
    if(index==arr.size()){
        return 0;
    }

    return arr[index++] + sum(arr);
}

// static varibale is not a good practice, we can pass index as an argument;


int main (){
    vector<int>arr = {1,2,3,4,5,6};
    cout<<sum(arr);
}