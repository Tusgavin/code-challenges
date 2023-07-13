#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ind;
        int i = 0;
        
        for (auto num : nums) {
            if (map.count(target - num) > 0) {
                ind.push_back(map[target - num]);
                ind.push_back(i);
                return ind;
            }
            
            map[num] = i;
            ++i;
        }
        
        return ind;
    }
};