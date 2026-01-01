// number of time array rotated 

#include<iostream>
#include<vector>
using namespace std;

int rotated(vector<int> &arr){
    int n = arr.size();
    if (n == 0) {
        return 0;
    }

    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        // pivot found
        if (mid > 0 && arr[mid] < arr[mid - 1]) {
            return mid;
        }

        // right half is unsorted → pivot on right
        if (arr[mid] > arr[end]) {
            start = mid + 1;
        }
        // left half is unsorted → pivot on left
        else if (arr[mid] < arr[end]) {
            end = mid;
        }
        // duplicates → shrink safely
        else {
            end--;
        }
    }

    return start;
}

int main (){
    vector<int> arr = {3,3,3,4,3};
    cout << rotated(arr);
}
