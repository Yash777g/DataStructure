#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>>& result, vector<int>& nums, int index) {
    if (index >= nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]); 
        solve(result, nums, index + 1);
        swap(nums[index],
                nums[i]); 
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    int index = 0;
    solve(result, nums, index);
    return result;
}

int main() {
    return 0;
}