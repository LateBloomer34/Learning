// count the digit of number

#include<iostream>
using namespace std;

int countDigit(int num){
    int count = 0;

    if (num <0 ){
        num = num*-1;
    }
    while(num>0){
        count++;
        num = num/10;
    }
    return count;

}

int main (){
    int num = 10;
    int result = countDigit(num);
    cout<<result;
}