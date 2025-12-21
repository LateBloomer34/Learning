#include<iostream>
#include<iomanip>
using namespace std;

int main (){
    int a  = 5;
    float b = 6.734567890987654;
    double b1 =611.98765456780987354678;
    char c = 'c';
    string d = "hello i am ";
    long long num = 197876456789098;
    bool result = true;


    // cout<<a<<" "<<b<<" "<<b1<<" "<<c<<" "<<d<<" "<<num<<" "<<result<<" ";

    // if we print full precision using double keyword we neeed to add setprecision keyword with precision value

    // we can add fixed keyword to add precision , means we can achieve precision digits after decimal
    // without fixed - we will get the total significant bits

    // cout<<fixed << setprecision(20) << b1 << endl;

    cout<< a;
}