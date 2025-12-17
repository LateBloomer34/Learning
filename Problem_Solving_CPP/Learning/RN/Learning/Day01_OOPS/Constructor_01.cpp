// constructor is a special function/method in a class which called automatically when onject is created;


// keypoint of constructor
// constructor name is always same as class name 
// it is a function but it doest not have any return type
// it run automatically when created;


// types of constructor
// default
// parameterize
// copy constructor



// creation of constructor



#include<iostream>
using namespace std;

class car{
    string brand;;
    string color;

public:
// constructor -  is a function same name as class but dont have any return type
    car(){
        brand = "tesla";
        color = "red";
        cout<<"constructor created";
    }

};



int main (){
     car first;
     

    return 0;
}