#include<iostream>
using namespace std;

// recursive function to calculate the fibonacci series
int fibonacci(int n, int a, int b) {
    int sum = 0;

    if(n != 0) {
        sum = a + b;
        cout << sum << endl;
        fibonacci(n - 1, b, sum);
    }
    
    return 0;
}

// iterative function to find the fibonacci series
/* void fibonacci(int n, int a, int b) {
    int sum;

    for(int i = 0; i < n; i++) {
        sum = a + b;
        cout << sum;

        a = b;
        b = sum;
    } return;
}*/

int main() {
    int n = 9, a = 0, b = 1;

    cout << "0" <<endl << "1" << endl;
    fibonacci(n, a, b);
    return 0;
}