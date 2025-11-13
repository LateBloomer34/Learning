#include<iostream>
#include<vector>
using namespace std;



int vect(vector<int>arr){
    // to check size of vector
    int n = arr.size();

    // to check first element of vector
    int first = arr[0];
    cout<<first<<endl;

    // begin(), end() , rbegin(), rend() is only access using iterator
    
    // initilize a iterator for begin then access
    vector<int>::iterator a = arr.begin();
    cout<<*(a)<<endl;

    // why * require -  coz iterator represent the memory location , and to aceess the element of that memory location *must be with variableName

    // access last element from iterator
    vector<int>::iterator b = arr.end();
    cout<<*(b)<<endl;


    //method 2 - using index 
    cout<<arr[n-1]<<endl;

    // to aceess first and last element of vector without using iterator // direct method
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    // / in interator we use apply the begin and end method


    // accessing the vector using iterator

    for (vector<int>::iterator ite = arr.begin() ; ite < arr.end() ; ite++){
        cout<<*(ite)<<" ";
    }

    


    // inserting the element in vector

    // arr.push_back(20);
    cout<<endl<<"new"<<endl;
    for (int i = 0  ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    arr.push_back(7);
    
    cout<<endl;
    for (int i = 0  ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    arr.pop_back();

    cout<<endl;
    for (int i = 0  ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    arr.insert(arr.begin() , 0);
    arr.insert(arr.end() , 0);
    cout<<endl;
for (int i = 0  ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}          

int main (){
    vector<int>arr = {1,2,3,4,5,6};
    int result = vect(arr);
    // cout<<result;

    
    return 0;
}
