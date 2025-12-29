#include<iostream>
#include<set>
using namespace std;

bool conatins(vector<int> &arr){
    int n = arr.size();

    // creation of a set 
    // what is set - set is a conatiner which store unique element in sorted order.

    set<int>s;

    for (int i = 0 ; i < n ; i++){
        if (s.count(arr[i])>0){
            return true;
        }
        s.insert(arr[i]);
    }
    for (auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;
    return false;
}

int main (){
    vector<int> arr = {1,2,3,1};
    bool result=conatins(arr);
    if (result){
        cout<<"duplicate present";
    }
    else{
        cout<<"duplicate not present";
    }
}