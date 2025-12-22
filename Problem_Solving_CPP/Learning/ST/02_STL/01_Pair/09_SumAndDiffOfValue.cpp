// Write a function that returns a pair<int, int> containing the sum and difference of two numbers.

#include<iostream>
using namespace std;

pair<int , int> calc(int n1, int n2){
    int diff = n1-n2;
    int sum = n1 + n2;

    return {sum , diff};

}

int main (){
        int n1 = 6; 
        int n2 = 3;

        pair<int , int>result = calc(n1, n2);

        cout<<"sum is " <<result.first<<endl;
        cout<<"diff is "<< result.second;
}