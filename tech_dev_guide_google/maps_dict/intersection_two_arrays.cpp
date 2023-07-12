#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        unordered_set<int> inter;
        
        for (auto v : nums2) {
            if (set.count(v) > 0) {
                inter.insert(v);
            }
        }
        
        return vector<int>(inter.begin(), inter.end());
    }
};