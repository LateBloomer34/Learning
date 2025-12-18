#include<iostream>
#include<vector>
using namespace std;

void merged (vector<int>&num1 , vector<int>&num2 , int m , int n ){
    vector<int>resultant;
    int i = 0 ; 
    int j = 0;

    while(i<m && j<n){
        if (num1[i]<=num2[j]){
            resultant.push_back(num1[i]);
            i++;
        }
        else{
            resultant.push_back(num2[j]);
            j++;
        }
    }
while(i<m){
    resultant.push_back(num1[i]);
    i++;
}
while(j<n){
    resultant.push_back(num2[j]);
    j++;
}


for (int i = 0 ; i< resultant.size(); i++){
    cout<<resultant[i]<<" ";
}
}

int main (){
    vector<int>num1 = {0};
    int m = 0;
    vector<int>num2 = {1};
    int n = 1;
    merged(num1 , num2, m , n);
}