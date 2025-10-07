#include <iostream>
using namespace std;

enum colors { red, green, blue, yellow };

int main() {
    colors c1 = green;

    if(c1 == red) {
        cout << "c1 is red";
    } else if(c1 == blue) {
        cout << "c1 is blue";
    } else if (c1 == yellow) {
        cout << "c1 is yellow";
    } else {
        cout << "c1 is green";
    }
    return 0;
}