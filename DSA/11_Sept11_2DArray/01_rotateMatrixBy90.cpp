#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>arr){
    int n = arr.size();
    int m = arr[0].size();

    // transpose of matrix;
    for (int i = 0 ; i < n ; i++){
        for (int j = i+1 ; j<m ;j++ ){
            int temp  =arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i]= temp;
            //arr[i][j]=arr[j][i]
        }
    }

    // reverse rows

    for (int i = 0 ;i < n ; i++){
        int start = 0 ;
        int end = m-1;
        while(start<end){
            int temp = arr[i][start];
            arr[i][start]  = arr[i][end];
            arr[i][end] =temp;
            //arr[i][start] = arr[i][end]
            start++;
            end--;
        }
    }

    for (int i = 0 ; i< n ; i++){
        for (int j = 0 ; j < m; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}

int main (){
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);
}