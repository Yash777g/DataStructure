#include <iostream>
using namespace std;

class CircularQueue {
    // intializing elements as private for security
    private:
        int *arr;
        int front, size, rear;

    public:
        // constructor intialization
        CircularQueue() {
            size = 1001;
            arr = new int[size];
            front = rear = -1; 
        }

        void push(int val);
        void pop();
        void display();
        int sizeOf();
};

// function to add elements in a circular queue
void CircularQueue :: push(int val) {
    if(rear == size-1 && front == 0 || (rear+1)%size == front) {
        cout << "Queue is full !!!" << endl;
        return;
    }

    if(front == -1) {
        front = rear = 0;
    } else {
        rear = (rear+1) % size;
    }

    arr[rear] = val;
}

// function to delete elements in a circular queue
void CircularQueue :: pop() {
    if(front == -1) {
        cout << "Queue is empty !!!" << endl;
        return ;
    }

    cout << "Element popped is: " << arr[front] << endl;
    arr[front] = -1;

    if(front == rear) {
        front = rear = -1;
    } else {
        front = (front+1) % size;
    }
}

// function to print queue
void CircularQueue :: display() {
    if(front == -1) {
        cout << "Queue is empty !!!";
        return ;
    }

    int i = front;
    while(true) {
        cout << arr[i] << " ";
        if(i == rear) break;
        i = (i+1) % size;
    } cout << endl;
}

// function to return size of queue
int CircularQueue :: sizeOf() {
    int size = 0, i = front;

    if(i == -1) { return 0;}
    
    while(true) {
        size++;
        if(i == rear) break;
        i = (i+1) % size;
    }
}

int main() {
    CircularQueue q;

    q.pop();

    q.push(3);
    q.push(5);
    q.push(1);
    q.push(2);

    q.display();
    q.pop();

    int size = q.sizeOf();
    cout << size;
    return 0;
}