#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        
        for (int v : nums) {
            if (set.count(v) > 0) {
                return true;
            }
            
            set.insert(v);
        }
        
        return false;
    }
};