#include <iostream>
using namespace std;

int fib(int n){
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// void fun(int n){
//     if (n > 5)
//         return;
//     cout << n << ' ';
//     fun(n + 1);
// }


int main()
{
    cout << fib(5);
    // fun(1);
}

// 3,2,1,0
// stack overflow
// 1 2 3 4 5


// Recursion Dry Run Questions (Interview Focused)
// 1. Dry run: int fun(int n){ if(n==0) return 0; return n+fun(n-1); } fun(3);
// 2. void print(int n){ if(n==0) return; cout<<n<<' '; print(n-1);} print(3);
// 3. int fact(int n){ if(n==0) return 1; return n*fact(n-1);} fact(4);
// 4. void fun(int n){ if(n==0) return; fun(n-1); cout<<n<<' ';} fun(3);
// 5. int fun(int n){ if(n==0) return 0; cout<<n<<' '; return fun(n-1);} fun(3);
// 6. int fun(int n){ if(n==0) return 0; return fun(n--);} fun(3);
// 7. int fun(int n){ if(n==0) return 0; return fun(--n);} fun(3);
// 8. int fun(int n){ static int x=0; if(n>0){ x++; return fun(n-1)+x;} return 0;} fun(3);
// 9. int fib(int n){ if(n<=1) return n; return fib(n-1)+fib(n-2);} fib(4);
// 10. void fun(int n){ if(n>5) return; cout<<n<<' '; fun(n+1);} fun(1);