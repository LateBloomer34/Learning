#include<iostream>
using namespace std;


class student {
public:
string name;
int age;
char sec;
string branch;

int marks(){
    cout<<"marks obtain by "<<name <<" in the age "<<age<<" who belongs to branch "<<branch<<" and his section is "<<sec;
    return 0;
}
};


int main (){
    student s1;
    s1.name = "himanshu";
    s1.age =25;
    s1.branch = "cse";
    s1.sec= 'A';
    s1.marks();

cout<<endl;

    student s2;
    s2.name = "raju0001";
    s2.age =28;
    s2.sec= 'B';
    s2.branch = "ece";
    s2.marks();
}