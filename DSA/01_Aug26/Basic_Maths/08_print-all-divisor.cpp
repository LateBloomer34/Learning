#include <iostream>
using namespace std;

// metho1 - irrited all numbers
/*
int divisor(int num){
    vector<int>arr;
    for (int i = 1 ; i<=num ; i++){
        if (num%i==0){
            arr.push_back(i);
        }
    }
    for (int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

// method 2 - irrited till square root of the number

int divisor(int num)
{
    vector<int> arr;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            arr.push_back(i);
            if (i != num / i)
            {
                arr.push_back(num / i);
            }
        }
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int main()
{
    int num;
    cout << "enter the number : ";
    cin >> num;
    divisor(num);
}
