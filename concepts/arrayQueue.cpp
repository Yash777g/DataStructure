#include <iostream>
#include <vector>
using namespace std;

// queue implementation using array by creating a class
class ArrayQueue {
    private:
        vector<int> nums;
        int front = 0;
        int rear = 0;

    public:
        void push(int data);
        void pop();

        int sizeOf();
        bool isEmpty();

        void frontOf();
        void rearOf();
};

// enque data in a queue
void ArrayQueue::push(int data) {
    nums.push_back(data);
    rear++;
}

// deque data from a queue
void ArrayQueue::pop() {
    if (front == rear) {
        cout << "queue is empty." << endl;
        front = 0;
        rear = 0;
        nums.clear();  // Reset storage
        return;
    }

    nums[front] = -1;
    front++;
}

// function to find no. of elements present in a queue
int ArrayQueue::sizeOf() {
    return rear - front;
}

// function to check if queue is empty or not
bool ArrayQueue::isEmpty() {
    return front == rear;
}

// function to find front of a queue
void ArrayQueue::frontOf() {
    if (front >= rear) {
        cout << "queue is empty" << endl;
    } else {
        cout << "Front: " << nums[front] << endl;
    }
}

// function to find the rear of a queue
void ArrayQueue::rearOf() {
    if (front >= rear) {
        cout << "queue is empty" << endl;
    } else {
        cout << "Rear: " << nums[rear - 1] << endl;
    }
}

int main() {
    ArrayQueue que;

    que.push(7);
    que.push(2);
    que.push(5);
    que.push(3);
    que.push(1);

    que.frontOf();
    que.rearOf();

    que.sizeOf();
    return 0;
}
