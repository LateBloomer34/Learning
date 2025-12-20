// string palindrome check
#include<iostream>
using namespace std;

bool check(string name){
    static int start = 0;
    static int end = name.length()-1;
    if(start>=end){
        return true;
    }
    if(name[start]!= name[end]){
        return false;
    }

    start++;
    end--;
    return check(name);
}


int main (){
    string name = "himanshu";
    bool result = check(name);
    if (result){
        cout<<"string is peli";
    }
    else{
        cout<<"not peli";
    }
}