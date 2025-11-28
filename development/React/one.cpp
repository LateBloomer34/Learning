#include<iostream>
using namespace std;

// void pattern (int n ){
//     for(int i = 0 ; i < n ; i++){ 

//         if (i == 0){
//             cout << "*";
//             cout << endl;
//             continue;
//         }
       
//         for (int j = 0 ; j <= i+1 ; j++){ 
//             if (i == n-1 || j == 0 || j == i+1){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

void pattern (int n){
    for (int i = 0 ; i < n  ;i++){
        if (i==0){
            cout<<"*";
        }
        else if (i==n-1){
            for (int j = 0 ; j < n+1 ;j++){
                cout<<"*";
            }
        }
        else{
            for (int j=0;j<=i+1 ;j++){
                if (j==0 || j==i+1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

int main (){
    int n = 5;
    pattern(n);
}
