#include <iostream>
#include <vector>
using namespace std;

class maxHeap {
    private:
        // implementation of a heap with starting index = 1
        vector<int> heap;
        int size; // keeps the track of last element 

        void heapifyUp(int index) {
            while(index > 1 && heap[index/2] < heap[index]) {
                swap(heap[index/2], heap[index]);
                index = index/2;
            }
        }

        void heapifyDown(int index) {
            while(true) {
                int left = 2*index;
                int right = 2*index + 1;
                int parent = index;

                if(left <= size && heap[left] > heap[parent]) {
                    parent = left;
                } if(right <= size && heap[right] > heap[parent]) {
                    parent = right;
                }

                if(parent == index) break;

                swap(heap[index], heap[parent]);
                index = parent;
            }
        }

    public:
        // constructor to initialize first element of heap as -1 or not accessible
        maxHeap() {
            heap.push_back(-1);
            size = 0;
        }

        void insert(int val);
        void remove();
        void print();
};

void maxHeap :: insert(int val) {
    heap.push_back(val);
    size++;
    heapifyUp(size);
}

void maxHeap :: remove() {
    if(size == 0) {
        cout << "Heap is empty !!!" << endl;
        return;
    }

    int maxVal = heap[1];
    heap[1] = heap.back();
    heap.pop_back();
    size--;

    if(size > 0) {
        heapifyDown(1);
    }

    cout << "Element popped is: " << maxVal << endl;
}

void maxHeap :: print() {
    for(int i = 1; i < heap.size(); i++) {
        cout << heap[i] << " ";
    } cout << endl;
}

int main() {
    maxHeap* heap = new maxHeap();

    heap->insert(1);
    heap->insert(2);
    heap->insert(3);
    heap->insert(4);
    heap->insert(5);

    heap->print();    
    heap->remove();

    heap->print();
    heap->insert(6);

    heap->print();
    heap->insert(7);

    heap->print();
    heap->remove();
    heap->print();
    return 0;
}