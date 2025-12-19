#include<iostream>
using namespace std;

int count (int num){
    if (num == 0){
        return 0;
    }
    return 1 + count(num/10);
}

int main (){
    int num = 98890;
    cout<<count(num);
}