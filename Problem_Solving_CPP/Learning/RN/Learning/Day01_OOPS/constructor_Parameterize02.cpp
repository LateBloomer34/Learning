// paraeterize constructor


#include<iostream>
using namespace std;

class car{
    string brand;
    string color;
    string country;
public:
    car(string a, string b ){
        brand = a;
        color = b;
        // cout<<brand<<endl;
        cout<<"paraeterized constructor created 1"<<endl;;
    }
    car(string a, string b , string c){
        brand = a;
        color = b;
        country = c;
        // cout<<brand<<endl;
        cout<<"paraeterized constructor created 2"<<endl;;
    }

    void property(int number){
        cout<<"this is my "<<number<<"st car"<<" and brand of car is "<<brand<<" color of my car is "<<color;
    }

};

int main (){
    int number = 1;
    car first("maruti" , "white");
    car second("maruti" , "white", "india");
    first.property(number);

    return 0;
}