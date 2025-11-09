#include <iostream>
#include <memory>
using namespace std;

int main() {
    // unique pointer
    int x = 5;
    unique_ptr<int> ptr = make_unique<int>(10);  
    cout << *ptr << endl;

    // shared pointer
    shared_ptr<int> ptr1 = make_shared<int>(42);
    shared_ptr<int> ptr2 = ptr1;

    cout << *ptr1 << " " << *ptr2;

    // weak pointer (avoids circular reference)
    weak_ptr<int> ptr3 = make_shared<int>();
    weak_ptr<int> ptr4 = make_shared<int>();
    return 0;
}   