#include <iostream>
#include <vector>
using namespace std;

// creating a class of stack implementation by array.
class ArrayStack {
    private:
        vector<int> nums;
        int top = -1;

    public:
        void push(int value);
        void pop();    
        void display();
};

// adding element in a stack in LIFO order.
void ArrayStack :: push(int value) {
    top++;
    nums.push_back(value); 
}

// removing elements from a stack in LIFO order.
void ArrayStack :: pop() {
    if(top >= 0) {
        nums[top] = 0;
        top--;
    }
    
    else { cout << "Stack is empty !!!!" << endl; }
}

// printing all the elements present in stack.
void ArrayStack :: display() {
    if(top < 0) { cout << "Stack is empty !!!!"; }
    
    for(int i = top; i >=0; i--) {
        cout << nums[i] << "\n";
    }
    
    cout << "\n";
}

// stack implementation using array.
int main() {
    ArrayStack *st = new ArrayStack();
    st->push(5);
    st->push(3);
    st->push(10);
    st->push(4);

    st->display();

    st->pop();
    st->pop();

    st->display();
    return 0;
}