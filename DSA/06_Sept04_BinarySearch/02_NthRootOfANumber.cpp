#include<iostream>
using namespace std;

int pov(int mid , int n){
    int result = 1;
    for (int i = 1  ; i <=n ; i++){
        result = result*mid;
    }
    return result;
}


int NthRoot(int num , int n){
    int start  = 1 ;
    int end = num;
    int ans  = -1;// to find floor value - if want to return -1 for not exact value remove line 23;
    while(start<=end){
        int mid = start+(end-start)/2;
        if (pov(mid, n)==num){  //we can use here inbuild pow function here also , but we create manul pow fuction as pov 
            return mid; //exact root
        }
        else if (pov(mid , n)<num){
            ans = mid; // possible answer  - floor value
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main (){
    int n = 4;
    int num = 94;
   cout<< NthRoot(num , n);
}