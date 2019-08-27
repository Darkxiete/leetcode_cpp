//
// Created by summer on 2019-08-27.
//

#include <vector>
#include <iostream>

using std::vector;
using std::cout;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> result;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int target = -nums[i];
            int l = i + 1, r = nums.size() - 1;

            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum > target)
                    r--;
                else if (sum < target)
                    l++;
                else {
                    result.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;
                    l++;
                    r--;
                }
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums1 = {};
    Solution s = Solution();
    s.threeSum(nums1);
}