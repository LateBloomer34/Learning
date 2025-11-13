#include<iostream>
using namespace std;

int access (vector<int>arr){
    int n = arr.size();

    vector<int>::iterator it; // decleartion of iterator

    for ( it = arr.begin() ; it!=arr.end() ; it++){
        cout<<*it<<" ";
    }
    cout<<endl<<*(arr.begin()+1)<<endl;
    cout<<*(arr.end()-1)<<endl;
    cout<<arr.front()+2<<endl;
    cout<<arr.back()<<endl;

    vector<pair<int , int>>vecPair = {{1,2},{3,4},{5,6}};
    // for (int i = 0 ; i< vecPair.size(); i++ ){
    //     cout<<vecPair[i].first<<" "<<vecPair[i].second<<" "<<endl;
    // }

    // create a itterator for vecPair

    vector<pair<int , int>>::iterator pr;
    for( pr = vecPair.begin() ; pr<vecPair.end() ; pr++){
        cout<<(*pr).first<<" "<<(*pr).second<<endl;
    }

    return 0;
}

int main (){
    vector<int >arr = {1,2,3,4,5,6,7};
    access(arr);
    return 0;
}