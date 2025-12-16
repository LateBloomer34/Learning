#include<iostream>
using namespace std;

void pattern(int n){

    // 1- star pattern
    for(int i = 0 ; i < n ;i++){
        for (int j = 0 ; j < n ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

cout<<endl;
    // 2- triangle pattern

    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; j<=i ;j++ ){
            cout<<"* ";
        }
        cout<<endl;
    }

cout<<endl;

// triangle of numbers


for (int i = 0 ; i<n ; i++){
    for (int j = 0 ; j <=i ; j++){
        cout<<j+1<<" ";
    }
    cout<<endl;
}

cout<<endl;

// triangle printing

for(int i = 0 ;i < n ; i++){
    for(int j = 0 ; j <=i ;j++){
        cout<<i+1<<" ";
    }
    cout<<endl;
}

cout<<endl;

// inverse triangle

for (int i = 0 ; i < n ; i++){
    for (int j = 0 ;j < n-i ; j++){
        cout<<j+1<<" ";
    }
    cout<<endl;
}

cout<<endl;


for (int i =0 ; i < n ;i++){
    for (int j = 0 ; j< n-i-1 ; j++){
        cout<<"  ";
    }
    for (int j = 0 ; j <= i ; j++){
        cout<<"* ";
    }
    cout<<endl;
}

cout<<endl;

// triangle with random 1 and 0;

for (int i = 0 ; i < n ; i++){
    for (int j = 0 ;j<=i ; j++){
        if (j%2==0){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<endl;
}


cout<<endl;


// randomm 1 0 triangle
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 

int count = 0;
for(int i = 0 ; i < n ; i++){
    for (int j = 0  ; j<= i ;j++){
        if (count%2==0){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
        count++;
    }
    cout<<endl;
}
}

int main (){
    int n = 5;
    pattern(n);
}