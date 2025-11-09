#include <iostream>
using namespace std;

struct data {
    int a;
    int b;    
};


int main() {
    // array of structures 
    data arr[5];

    arr[0].a = 2, arr[0].b = 3;
    arr[1].a = 5, arr[1].b = 2;
    return 0;
}