#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    if (nums.size() == 3) {
        return nums[0] + nums[1] + nums[2];
    }

    sort(nums.begin(), nums.end());
    int result =
        nums[0] + nums[1] +
        nums[2]; // Initialize result to the sum of first three elements
    int diff = abs(result - target);    

    for (int i = 0; i < nums.size() - 2; ++i) {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target) {
                return sum;
            }
            if (abs(sum - target) < diff) {
                result = sum;
                diff = abs(sum - target);
            }
            if (sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }
    return result;
}

int main() {
    return 0;
}