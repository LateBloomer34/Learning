// Remove all even numbers from a vector.


#include<iostream>
using namespace std;

int removeEven (vector<int> &arr){
    int n = arr.size();

    int j = 0 ;
    for (int i = 0 ; i < n  ;i++){
        if (arr[i]%2!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    return j;
}

int main (){
    vector<int>arr = {1,2,2,3,5,4,6};
    int result = removeEven(arr);
    for (int i = 0 ; i < result ; i++ ){
        cout<<arr[i]<<" ";
    }
}


// optimize approach using STL

// int main() {
//     vector<int> arr = {1,2,2,3,5,4,6};

//     arr.erase(
//         remove_if(arr.begin(), arr.end(),
//                   [](int x) { return x % 2 == 0; }),
//         arr.end()
//     );

//     for (int x : arr) {
//         cout << x << " ";
//     }
// }
