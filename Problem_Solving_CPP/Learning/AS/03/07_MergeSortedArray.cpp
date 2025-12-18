#include<iostream>
#include<vector>
using namespace std;

void merged (vector<int>&num1 , vector<int>&num2 , int m , int n ){
    // vector<int>resultant;
        int i = m-1 ; 
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){
            if (num1[i]> num2[j]){
                num1[k] = num1[i];
                i--;
                k--;
            }
            else{
                num1[k]= num2[j];
                j--;
                k--;
            }
        }
        
        while(i>=0){
            num1[k]= num1[i];
                i--;
                k--;
        }
        while(j>=0){
             num1[k]= num2[j];
                j--;
                k--;
        }

for (int i = 0 ; i< num1.size(); i++){
    cout<<num1[i]<<" ";
}
}

int main (){
    vector<int>num1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int>num2 = {2,5,6};
    int n = 3;
    merged(num1 , num2, m , n);
}