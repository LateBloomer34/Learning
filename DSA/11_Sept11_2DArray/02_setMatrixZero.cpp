#include<iostream>
#include<vector>
using namespace std;

void setZero(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();

    vector<int>rowMark(n, 0);
    vector<int>colMark(m, 0);

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j< m ; j++){
            if (arr[i][j]==0){
                rowMark[i]=1;
                colMark[j]=1;
            }
        }
    }

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (rowMark[i]==1 || colMark[j]==1){
                arr[i][j] =0;
            }
        }
    }

    for (int i = 0 ; i < n  ;i++){
        for (int j = 0 ; j < n ; j++){
           cout<<arr[i][j];
        }
        cout<<endl;
    }

}

int main (){
    vector<vector<int>>arr = {{1,1,1},{1,0,1},{1,1,1}};
    setZero(arr);
}
