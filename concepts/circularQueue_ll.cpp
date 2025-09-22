#include <iostream>
using namespace std;

// creating a class to implement linked list logic 
class List {
    public:
        int val;
        List *next;

        List(int val) {
            this->val = val;
            this->next = nullptr;
        }
};

// implementing circular Queue using linked list
class CirQueueList {
    public:
        List *front;
        List *rear;
        
        CirQueueList() {
            front = nullptr;
            rear = front;
        }

        void push(int val);
        void pop();
        void display();
        bool isEmpty();
};

// function to add elements in a queue
void CirQueueList :: push(int val) {
    List *temp = new List(val);
    if(isEmpty() == true) {
        front = temp;
        rear = temp;
    } 
    
    rear->next = temp;
    rear = temp;
    return;
}

// function to delete elements in a queue
void CirQueueList :: pop() {
    if(front == rear) {
        front = rear = nullptr;
    }
    
    List *temp = front;
    front = front->next;
    delete temp;
}

// function to print the queue in fifo order
void CirQueueList :: display() {
    if(isEmpty()) {
        cout << "queue is empty !!";
    }
    List *temp = front;

    while(temp != rear) {
        cout << temp->val << " ";
        temp = temp->next;
    } 
    
    cout << temp->val << endl;
    return;
}

// to check is queue is empty or not
bool CirQueueList :: isEmpty() {
    if(front == nullptr && rear == nullptr) {
        return true;
    } return false;
}

int main() {
    CirQueueList q;

    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    q.display();

    q.pop();
    q.display();

    q.push(7);
    q.display();

    return 0;
}