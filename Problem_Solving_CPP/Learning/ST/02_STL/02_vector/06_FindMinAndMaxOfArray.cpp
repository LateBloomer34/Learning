// Find the maximum and minimum elements in a vector.

#include<iostream>
using namespace std;

int main (){
    vector<int>arr= {6,4,1,8,9,4};
    int max = INT_MIN;
    int min = INT_MAX;
    int n = arr.size();
    for (int i = 0 ; i < n ; i++ ){
        if (arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min= arr[i];
        }
    }
    cout<<"min ele of array "<<min<<endl;
    cout<<"max ele of array "<<max<<endl;
}