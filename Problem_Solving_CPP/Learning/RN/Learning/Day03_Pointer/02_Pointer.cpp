// creation of pointer

#include<iostream>
using namespace std;

// int main (){
//     int a = 5; // creation of variable
    
//     int *p ;// cration of pointer (p is a pinter which indicate the int type value)
//  p = &a; // point the address of a variable a 
 

//  // pointer takes the 
//  *p = 6; (here we modify the valuein that location , if we update the value of that location , variable value is also change)
//  a = 6;
//  cout<< &a<<endl;
//  cout<< a; 

// }



int main (){
    // 1- creation of variable -
    int a  = 8;

    // creation of pointer for above variable

    int *p ;
 
    // move that a varibal in pointer p (give a to p memory location)

    p = &a;

    // print the location of a 

    // cout<<&a;
    // cout<<endl<<a;
    // cout<<endl<<p;
    // cout<<endl<<&p; //Prints address of pointer variable p (Pointer itself is also stored somewhere in memory)


    int arr[5] = {1,2,3,4,5};
    cout<<arr[2]<<endl;
    int *pointer;
    pointer = arr;
    cout<<pointer<<endl;
    cout<<&pointer<<endl; 
    cout<<arr<<endl; // print the address of arr
    cout<< &arr; // it will also print the initial address of arr
}