// print n to 1

#include<iostream>
using namespace std;

void print(int  start , int end){
    if (start<end){
        return ;
    }
    cout<<start<<" ";
   
    return print(start-1 , end);

}

int main (){
    int start = 10;
    int end = 1;
    print (start ,  end);
}