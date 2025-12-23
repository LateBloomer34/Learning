// Insert elements at the end of a vector and display the size and capacity after each insertion.


#include<iostream>
using namespace std;

// int main (){
//     vector<int>arr(5,100); // array of 5 size and every elemet is 100;
//     arr.emplace_back(5);
//     for (auto i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"size of arry is "<<arr.size()<<endl;
// }


// above approach using function

void insert(vector<int> &arr){
    int n = 5;
    for (int i = 0 ;i < n; i++){
        int x ;
        cout<<"eneter the element ";
        cin>>x;
        arr.push_back(x);
        cout<<endl;
        cout<<"size of insert of element is "<<arr.size()<<endl;
    }
}

int main (){
    vector<int>arr;
    insert(arr);
    cout<<endl<<"total size of array is "<<arr.size();
}
