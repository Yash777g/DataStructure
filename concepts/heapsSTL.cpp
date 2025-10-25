#include <iostream>
#include <queue>
using namespace std;

int main() {
    // by default maxheap
    priority_queue<int> maxheap;

    maxheap.push(23);
    maxheap.push(19);
    maxheap.push(6);
    maxheap.push(12);

    cout << "Size of maxheap is: " << maxheap.size() << endl;
    cout << "Top of maxheap is:" << maxheap.top() << endl;
    
    maxheap.pop();
    cout << "Size of maxheap is: " << maxheap.size() << endl;
    cout << "Top of maxheap is:" << maxheap.top() << endl;
    cout << endl;

    // minheap implementation
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    minheap.push(25);
    minheap.push(4);
    minheap.push(13);
    minheap.push(21);

    cout << "Size of minheap is: " << minheap.size() << endl;
    cout << "Top of minheap is:" << minheap.top() << endl;
    
    minheap.pop();
    cout << "Size of minheap is: " << minheap.size() << endl;
    cout << "Top of minheap is:" << minheap.top() << endl;

    return 0;
}