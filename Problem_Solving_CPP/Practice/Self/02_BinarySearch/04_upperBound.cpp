#include <iostream>
#include <vector>
using namespace std;

int countOccurrences(vector<int>& arr, int target) {
    int n = arr.size();

    // ---------- Lower Bound ----------
    int start = 0, end = n - 1;
    int lb = n;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= target) {
            lb = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // ---------- Upper Bound ----------
    start = 0;
    end = n - 1;
    int ub = n;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > target) {
            ub = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ub - lb;
}

int main() {
    vector<int> arr = {1,2,3,3,3,3,3,3,4,5,6,7};
    int target = 3;
    cout << countOccurrences(arr, target);
}
