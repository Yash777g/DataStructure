#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Cube {
    private:
        int l,b,h;
    public:
        //default constructor
        Cube() {
            l = b = h = 0;
        }

        // parameterized constructor
        Cube(int lenght, int breadth, int height) {
            this->l = lenght;
            this->b = breadth;
            this->h = height;
        }

        // operator overloading for output
        // we have to define it as a friend function as it cannot access private members of a class
        friend ostream& operator<<(ostream& output, Cube& x) {
            output << x.l << " " << x.b << " " << x.h;
        }
};

int main() {
    Cube q(1,2,3);

    cout << q;
    return 0;
}