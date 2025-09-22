#include <iostream>
using namespace std;

// function to provide basic arithematic operations
void calculator(int a, int b, char op) {
    switch (op) {
    
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;

        case '/':
            cout << a / b;
            break;

        default:
            cout << "thanks";
            break;
        }
}
int main() {
    float a = 0 ,b = 0;
    char op;

    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter operation to perform:";
    cin >> op;

    calculator(a, b, op);
    return 0;
}