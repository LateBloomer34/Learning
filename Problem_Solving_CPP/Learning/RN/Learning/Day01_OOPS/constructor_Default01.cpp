// default constructor

#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    string color;

    car(){
       // here car is a constructor which is a function doent have any return type and it eqecute automatically
        cout<<"construcor created ";
    }
};

int main (){
    car first;
    
}