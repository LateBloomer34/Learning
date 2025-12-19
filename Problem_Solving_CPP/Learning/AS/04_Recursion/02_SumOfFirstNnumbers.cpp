#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0){
        return 0;
    } 
    return n+sum(n-1);
}
 
int main()
{
    int n = 7;
    cout << sum(n);
}
// 6 - 6 =>
// 5- 11 =>
// 4- 15
// 3 - 18
// 2 - 20
// 1 -