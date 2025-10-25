#include <iostream>
using namespace std;

// non returning and non parameteric function
void greet() {
    cout << "hello" << endl;
    return ;
}

// non returning and parameteric function
void area(int a) {
    cout << a*a << endl; 
    return ;
}

// returning and parameteric function
int result(int a, int b) {
    return a*(b+2);
}

int main() {
    greet();
    area(5);

    int ans = result(3,4);
    cout << ans;
    return 0;
}