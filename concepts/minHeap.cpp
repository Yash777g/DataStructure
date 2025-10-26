#include <iostream>
#include <vector>
using namespace std;

class minHeap {
    private:
        vector<int> heap;
        int size;
    
        void heapifyUp(int index) {
            while(index > 1 && heap[index/2] > heap[index]) {
                swap(heap[index], heap[index/2]);
                index = index/2;
            }
        }

        void heapifyDown(int index) {
            while(true) {
                int parent = index;
                int left = 2*parent;
                int right = 2*parent + 1;

                if(left <= size && heap[left] < heap[parent]) 
                    parent = left;
                if(right <= size && heap[right] < heap[parent])
                    parent = right;
                    
                if(parent == index) return;

                swap(heap[parent], heap[index]);
                index = parent;
            }
        }

    public:
        minHeap() {
            heap.push_back(-1);
            size = 0;
        }

        void insert(int val);
        void remove();
        void printheap();
};

void minHeap :: insert(int val) {
    heap.push_back(val);
    size++;
    heapifyUp(size);
}

void minHeap :: remove() {
    if(size == 0) {
        cout << "Empty heap !!!" << endl;
        return;
    }

    int minVal = heap[1];
    heap[1] = heap.back();
    heap.pop_back();
    size--;

    if(size > 1) {
        heapifyDown(1);
    }

    cout << "Element deleted: " << minVal << endl;
}

void minHeap :: printheap() {
    for(int i = 1;i < heap.size(); i++) {
        cout << heap[i] << " ";
    } cout << endl;
}

int main() {
    minHeap* heap = new minHeap();

    heap->insert(5);
    heap->insert(4);
    heap->insert(3);
    heap->insert(2);
    heap->insert(1);
    heap->insert(6);

    heap->printheap();
    heap->remove();

    heap->printheap();
    heap->remove();
    heap->printheap();
    return 0;
}