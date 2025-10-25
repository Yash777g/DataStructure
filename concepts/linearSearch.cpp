#include<iostream>
#include<vector>
using namespace std;

// recursive method
/* void linearSearch(vector<int> &arr, int key, int &index) {
    if(start >= arr.size() {
        cout << "element not found";
        return;
    }

    if(arr[index] == key) {
        cout < "element found at index" << index;
        return;
    }

    linearSearch(arr, key, index++);
}
*/

// iterative method
void linearSearch(vector<int> &arr, int key) {
    int cnt = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(key == arr[i]) {
            cout << "Element found at index: " << i;
            cnt++;
        }
    }
    
    if(cnt == 0) 
        cout << "Element not found!!!";
}

int main() {
    vector<int> arr {2,1,4,5,3};
    int key = 3;

    linearSearch(arr, key);
    return 0;
}