#include<iostream>
using namespace std;

bool perfect(int num){
    // find the divisor
    vector<int>arr;
    for (int i = 1 ; i <= num ;i++){
        if (num%i == 0){
            arr.push_back(i);
        }
    }
    int sum = 0 ;
    for (int i = 0 ; i < arr.size()-1; i++){
        sum = sum+arr[i];  
    }
    return num==sum;
}

int main (){
    int num = 28;
    if(perfect(num)){
        cout<<"perfect number";
    }
    else{cout<<"not perfect";}
}