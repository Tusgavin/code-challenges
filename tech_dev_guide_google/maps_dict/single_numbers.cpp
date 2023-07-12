#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> set;
        
        for (auto v : nums) {
            if (set.count(v) > 0) {
                set.erase(v);
                continue;
            }
            
            set.insert(v);
        }
        
        return *set.begin();
    }
};