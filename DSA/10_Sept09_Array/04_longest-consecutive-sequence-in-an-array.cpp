#include<iostream>
using namespace std;

int conse(vector<int>arr){
    int n = arr.size();
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    // sort the array
    sort(arr.begin(), arr.end());

int count = 1 ;
int maxLen = 1;
for (int i = 1 ; i < n ; i++){
if (arr[i] == arr[i-1]+1){
    count++;
    maxLen = max(maxLen, count);
}
else if (arr[i]== arr[i-1]){
    continue;
}
else{
    count = 1 ;
}
}
    return maxLen;
}

int main (){
    vector<int>arr = {100, 200, 1, 3, 2, 4};
    cout<<conse(arr);
}