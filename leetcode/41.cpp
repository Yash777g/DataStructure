#include <iostream>
#include <vector>
using namespace std;

void cyclicSort(vector<int>& nums) {
    int i = 0;
    while (i < nums.size()) {
        if (nums[i] != i + 1 && nums[i] > 0 && nums[i] < nums.size() + 2) {
            int correctIndex = nums[i] - 1;
            if (correctIndex < nums.size() &&
                nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
}

int firstMissingPositive(vector<int>& nums) {
    int size = nums.size();
    if (nums.size() == 1 && nums[0] == 1) {
        return 2;
    }
    cyclicSort(nums);

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == i + 1)
            continue;
        return i + 1;
    }

    return size + 1;
}

int main() {
    return 0;
}