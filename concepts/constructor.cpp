#include<iostream>
using namespace std;

class complex {
    private:
        int real, img;
    public:
        // default constructor
        complex() { 
            real = 0;
            img = 0;
        }

        // parameterized constructors initialization
        complex(int value);
        complex(int Real,int Img);

        /*data1(data1& temp) {    // copy constructor and passed through reference as passed by value gives error.
            this->a = a;
            this->b = b;
        }*/                 // pass by value created a infinte calling loop between constructor and object.

        void display() {
            cout << "The complex no:" << real << " + " << img << "i" << endl;
        }
};

// parameterized constructors declaration
complex :: complex (int value) {
    real = img = value;
}

complex :: complex(int Real, int Img) {
    real = Real;
    img = Img;
}

int main() {
    complex c1(5), c2(3,4), c3;
    
    c1.display();
    c2.display();
    c3.display();

    // this technique is used as to call copy constructor 
    // it automatically detects the type of object to create
    complex c4(c2); 

    return 0;
}
