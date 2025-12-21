#include<iostream>
using namespace std;

void swap(vector<int> &a  , int end){
    int start = 0 ; 

    while(start<end){
        swap(a[start] , a[end-1]);{
            start++;
            end--;
        }
    }
}

int main (){
   vector<int >a = {1,2,3,4,5,6,7} ;
    int b = 7;
    swap(a, b);
    for (int i =0 ; i < b ; i++){
        cout<<a[i]<<" ";
    }

}