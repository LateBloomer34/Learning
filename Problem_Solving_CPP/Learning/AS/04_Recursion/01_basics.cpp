// print numbers form 1 to 10 using recrusion

#include<iostream>
using namespace std;

int count(int Lnum){
    if (Lnum > 10){
        return 0;
    }
    cout<<Lnum<<" ";
    Lnum++;
    return count(Lnum);
}

int main (){
    int Lnum = 1;
    count(Lnum);
}