#include<iostream>
#include<vector>
using namespace std;

int zeroSet(vector<vector<int>>arr){
    int n = arr.size();
    int m = arr[0].size();
   vector<int>rowMark(n, 0);
   vector<int>colMark(m, 0);

   // mark row and col containing zero
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < m ; j++){
            if (arr[i][j]==0){
                rowMark[i] = 1;
                colMark[j] = 1;
            }
        }
    }
    for (int i = 0 ; i < n ; i++){
        for (int j =0 ; j <  m ;j++){
            if (rowMark[i]||colMark[j]){
                arr[i][j]=0;
            }
        }
    }

    for (int i = 0 ; i< n ; i++){
        for (int j =0 ;j< m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


int main (){
    vector<vector<int>>arr = {{1,1,1},{1,0,1},{1,1,0}};
    zeroSet(arr);
}