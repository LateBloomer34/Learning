// min from an array


#include<iostream>
using namespace std;

// int min (vector<int>arr){
//     static int start = 0;
//     static int end = arr.size()-1;
//     static int minNum = INT_MAX;

//     if (start>end){
//         return minNum;
//     }
//     if (arr[start]<minNum){
//         minNum = arr[start];
//     }
//     start++;
//     return min(arr);
// }


// method 2 - short and good method - without static int 

int mini (vector<int>arr, int index){
    if (index > arr.size()){
        return arr[index];
    }

    return min (arr[index], mini(arr , index+1));
}

int main (){
    vector<int>arr = {1,0,2,4,9,-1,10};
    cout<<mini(arr, 0);
}