// paraeterize constructor


#include<iostream>
using namespace std;

class car{
    string brand;
    string color;
public:
    car(string a, string b ){
        brand = a;
        color = b;
        cout<<brand<<endl;
        cout<<"paraeterized constructor created"<<endl;;
    }

    void property(int number){
        cout<<"this is my "<<number<<"st car"<<" and brand of car is "<<brand<<" color of my car is "<<color;
    }

};

int main (){
    int number = 1;
    car first("maruti" , "white");
    first.property(number);

    return 0;
}