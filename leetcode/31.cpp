#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 1;
    while(i > 0 && (nums[i] < nums[i-1])) {
        i--;
    }

    if(i == 0) {
        reverse(nums.begin(), nums.end());
        return ;
    }

    int j = nums.size() - 1;
    while(j > i && (nums[i-1] >= nums[j])) {
        j--;
    }

    swap(nums[i-1], nums[j]);
    reverse(nums.begin() + i, nums.end()); 
}

int main() {
    vector<int> nums = {1,1,5};
    nextPermutation(nums);
    for(auto i : nums) {
        cout << i << " ";
    }
    return 0;
}