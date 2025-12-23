// Check whether a vector is a palindrome.

#include<iostream>
using namespace std;

bool paliCheck(vector<int> &arr){
    int n = arr.size();
    int start = 0;
    int end = arr.size()-1;

    while(start<end){
        if (arr[start]!= arr[end]){
            return false;
        }
        else{
            start++;
            end--;
        }

    }
    return true;
}

int main (){
    vector<int>arr = {1,2,3,4,5,3,2,1};
    bool result = paliCheck(arr);

    if (result){
        cout<<"array is palindrome";
    }
    else{
        cout<<"array is not palindrome";
    }
}