#include<iostream>
#include <vector>
using namespace std;

void reverse(vector<char> &s){
    int start = 0 ;
    int end = s.size()-1; // coz s is the array , so we use s.size here

    while(start<end){
        char temp = s[start];
        s[start] = s[end];
        s[end] =temp;
        start++;
        end--;
    }
    
}

int main (){
    vector<char>s = {'h' ,'i', 'm' ,'a','n', 's', 'h' ,'u'};
   reverse(s);
   for (int i = 0 ; i < s.size() ; i++){
        cout<<s[i];
    }
}