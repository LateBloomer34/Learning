#include<iostream>
using namespace std;

class student {
public:
    string name = "himanshu";
    int age= 36;
    string branch = "cse";


    public:
    string getName(){
        return name;
    }

};



int main (){
    student s1;
    cout<<s1.getName();
}