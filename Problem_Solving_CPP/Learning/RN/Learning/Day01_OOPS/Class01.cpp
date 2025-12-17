#include<iostream>
using namespace std;

class student {
    public:
    string name = "himanshu";
    int age= 36;
    string branch = "cse";
};

int main (){
    student details;
cout<<details.name<<endl; 
cout<<details.age<<endl;
details.name = "raju";
cout<<details.name<<endl;
}

