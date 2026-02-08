#include <iostream>
#include <vector>
using namespace std;

// using kadane's algorithm
int maxSubArray(vector<int>& nums) {
    int maxx = 0;
    int currMax = 0;

    maxx = nums[0];
    for(int i = 1; i < nums.size(); i++) {
        if(maxx < nums[i]) maxx = nums[i];
    }
    if(maxx < 0) return maxx;

    maxx = 0;
    for(int i = 0; i < nums.size(); i++) {
        currMax = currMax + nums[i];

        currMax = max(currMax, 0);
        maxx = max(currMax, maxx);
    }
    return maxx;
}

int main() {
    vector<int> nums = {5,4,-1,7,8};
    cout << maxSubArray(nums);
    return 0;
}