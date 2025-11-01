#include <iostream>
using namespace std;

int main() {
    /*basic arithematic operators*/
    int a = 4, b = 3;

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;

    /*relational operators*/
    cout << (a>b) << endl;
    cout << (a<b) << endl;
    cout << (a>=b) << endl;
    cout << (a<=b) << endl;
    cout << (a==b) << endl;
    cout << (a!=b) << endl;

    /* bitwise operations
        or -> |
        and -> &
        xor -> ^
        left shift -> <<
        right shift -> >>

        0 or 0 = 0 and 1 or 1 = 1
        0 or 1 = 1 and 1 or 0 = 1
        
        0 and 0 = 0 and 1 and 1 = 1
        0 and 1 = 0 and 1 and 0 = 0
        
        0 xor 1 = 1 and 1 xor 0 = 1
        1 xor 1 = 0 and 0 xor 0 = 0

        left shift = multilplying by 2
        right shift = dividing by 2
    */

    // or operation
    cout << (a|b) << endl;

    // and operation 
    cout << (a&b) << endl;

    // xor operation 
    cout << (a^b) << endl;

    // left shift and right shift by only place
    cout << (a<<1) << " " << (a>>1) << endl;

    // left shift and right shift by two place
    cout << (a<<2) << " " << (a>>2);
    return 0;
}