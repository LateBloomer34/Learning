#include<iostream>
using namespace std;


/*
We are playing the Guess Game. The game is as follows:
I pick a number from 1 to n. You have to guess which number I picked (the number I picked stays the same throughout the game).
Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.
You call a pre-defined API int guess(int num), which returns three possible results:

-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.


Example 1:

Input: n = 10, pick = 6
Output: 6
Example 2:

Input: n = 1, pick = 1
Output: 1
Example 3:

Input: n = 2, pick = 1
Output: 1
*/

int guessNumber(int n , int pick){
    int start = 1 ;
    int end = n;

    while(start<=end){
        int mid = start +(end-start)/2;
        if (mid == pick){
            return mid;
        } 
        else if (mid<pick){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main (){
    int n = 10;
    int pick = 7;
    cout<<guessNumber(n , pick);
}