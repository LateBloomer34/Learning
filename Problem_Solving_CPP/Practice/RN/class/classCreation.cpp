#include<iostream>
using namespace std;

class user{
    public:
    char name;
    int age;
    int* point = &age;

    user(){
        point= &age;
    }
};

int main (){
    user a;
    a.age = 30; // class is an object an age is the key of that object;
    a.name = 'a';
    

    cout<<a.name<<endl;
    cout<<a.age<<endl;
    cout<<a.point<<endl;
}