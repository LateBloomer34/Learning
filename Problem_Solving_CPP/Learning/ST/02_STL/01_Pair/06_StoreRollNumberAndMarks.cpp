// Use a vector<pair<int, int>> to store roll numbers and marks of students and display them.

#include<iostream>
using namespace std;



int main (){
    vector<pair<int , int>>a;
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        int rollNo;
        int marks;
       cout<<"enter the roll no "<<" ";
        cin>>rollNo;
       cout<<"eneter the marks ";
        cin>>marks;
        a.push_back({ rollNo , marks});
    }

    for (int i = 0; i< n; i++){
        cout<<a[i].first<<" "<<a[i].second;
        cout<<endl;
    }
}