// contains duplicate

#include<iostream>
using namespace std;

vector<int> duplicate(vector<int> &arr){
    int n = arr.size();
    vector<int>freq(n,0);
    
    for (int i = 0 ; i < n ; i++){
        int index = arr[i]-1;
        freq[index]++;
    }
    // int result = -1;
    vector<int >result;
    for (int i = 0 ; i < n; i++){
        if (freq[i]>1){
            result.push_back(i+1); 
        }
        
    }
    return result;
}

int main (){
    vector<int> arr = {1,2,3,1,2,5,5};
  vector<int>resu = duplicate(arr);
    for(auto it:resu){
        cout<<it<<" ";
    }
}