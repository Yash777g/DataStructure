#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int index, int size) {
    int largest = index;
    int left = 2 * index;
    int right = 2 * index + 1;

    if (left <= size && arr[left] > arr[largest])
        largest = left;
    if (right <= size && arr[right] > arr[largest])
        largest = right;

    if (largest != index) {
        swap(arr[index], arr[largest]);
        heapify(arr, largest, size);
    }
}

void buildHeap(vector<int>& arr) {
    int size = arr.size() - 1; // ignore dummy at index 0
    for (int i = size / 2; i >= 1; i--) {
        heapify(arr, i, size);
    }
}

void heapSort(vector<int>& arr) {
    int size = arr.size() - 1;
    while (size > 1) {
        swap(arr[1], arr[size]); // move max to end
        size--;                  // reduce heap size
        heapify(arr, 1, size);   // restore heap
    }
}

void printHeap(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {-1, 54, 55, 52, 53, 50}; // 1-indexed

    buildHeap(arr);
    cout << "Heap: ";
    printHeap(arr);

    heapSort(arr);
    cout << "Sorted: ";
    printHeap(arr);

    return 0;
}
