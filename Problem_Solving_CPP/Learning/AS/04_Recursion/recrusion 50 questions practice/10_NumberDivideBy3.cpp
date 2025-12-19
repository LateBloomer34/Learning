// Print all numbers divisible by 3 from 1 to N.

#include<iostream>
using namespace std;

void count(int start, int end){
    if (start>end){
     return ;
    }
   if(start%3==0){
    cout<<start<<" ";
   } 
   count(start+1 , end);
     
}

int main (){
    int start = 1;
    int end = 25;
    count(start , end);
}

// if start point not given


// void count (int end){
//     if (end==0){
//         return;
//     }
//     if (end%3==0){
//         cout<<end<<" ";
//     }
//     count(end-1);
// }


// int main (){
//     int start = 1;
//     int end = 25;
//     count( end);
// }