#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) {
            return ans;
        }

        sort(nums.begin(), nums.end());

        recSum(4, 0, target, nums);

        return ans;
    }

    void recSum(int k, int i, long long int target, vector<int>& nums) {
        if (k == 2) {
            int l = i;
            int r = nums.size() - 1;

            while (l < r) {
                if (nums[l] + nums[r] > target) {
                    r--;
                } else if (nums[l] + nums[r] < target) {
                    l++;
                } else {
                    curr.push_back(nums[l]);
                    curr.push_back(nums[r]);
                    ans.push_back(curr);
                    curr.pop_back();
                    curr.pop_back();
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1]) l++;
                    while(l < r && nums[r] == nums[r+1]) r--;
                }
            }

            return;
        }

        for (int j = i; j < nums.size() - k + 1; ++j) {
            if (j > i && nums[j] == nums[j-1]) continue;

            curr.push_back(nums[j]);
            recSum(k - 1, j + 1, target - nums[j], nums);
            curr.pop_back();
        }
    }
};