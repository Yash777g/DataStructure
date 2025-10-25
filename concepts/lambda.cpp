#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5};
    
    // lambda sort function to arrange in descending order.
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    } return 0;
}