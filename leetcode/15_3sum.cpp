#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; ++i) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int a = nums[i];
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                if (nums[l] + nums[r] + a > 0) {
                    r--;
                } else if (nums[l] + nums[r] + a < 0) {
                    l++;
                } else {
                    vector<int> s{nums[i], nums[l], nums[r]};
                    ans.push_back(s);
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l-1]) l++;
                    while (l < r && nums[r] == nums[r+1]) r--;
                }
            }
        }

        return ans;
    }
};