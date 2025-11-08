// destructor is a special function in class, which is automatically called when object is no longer use or go out of scope,

// it use for release the memory , close file and relese resources.

/* 
keypoint -  automatically called ,
    name is same as class name but put ~ before the name,
    no return type needed,
    only one destuructor per class.


*/


#include<iostream>
using namespace std;

class car{
    string brand;
    string color;
    string model;
public:

// constructor
    car(){
        brand = "maruti";
        color = "white ";
        model = "800";
        cout<<"may car brand is "<<brand<<" and colur is "<<color<<" model name is "<<model;
    }

    void owner(string name ){
        cout<<endl<<"owner of that car is "<<name;
    }

    // destructure
    

     car(string name){
        
        cout<<endl<<"may car brand is "<<name;
    }
    int time = 1;
    ~car(){
        cout<<endl<<"creation of destructure "<<time;
    }

};

//each object gets its own destructor call when it is destroyed —
// and since we have two objects, the destructor runs twice here.

int main (){
    car first;
    
    string name = "himanshu";
    car s1( name);  
    first.owner(name);

}


