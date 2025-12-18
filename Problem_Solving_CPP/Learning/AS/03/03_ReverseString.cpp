#include<iostream>
using namespace std;

string reverse(string a){
    int start = 0 ;
    int end = a.length()-1;
    while(start<end){
        int temp = a[start];
        a[start] =a[end];
        a[end] = temp; 
        start++;
        end--;
    }


    return a;
}


int main (){
    string a = "himanshu";
    // for (int i = 0 ;  i < a.length() ; i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<reverse(a);
}