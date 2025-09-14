#include <iostream>
using namespace std;

int main() {
    // static array declaration and initialization. 
    int arr[5] = {1,2,3,4,5};

    // static array declaration and initializing all elements to zero.
    int arr1[5] = {0};

    // user input and storing elements in an array.
    for(auto i : arr1) {
        cin >> i;
    } cout << "successfull";

    // dynamic array initialization.
    int *arr2 = new int[5];
    
    for(int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }

    // releasing memory.
    delete[] arr2;

    return 0;
}