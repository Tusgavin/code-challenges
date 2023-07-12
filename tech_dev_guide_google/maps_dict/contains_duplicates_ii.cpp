#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> occ;
        int ind = 0;
        
        for (auto i : nums) {
            if (occ.count(i)) {
                if (abs(occ[i] - ind) <= k) {
                    return true;
                }
            }
            
            occ[i] = ind;
            ind++;
        }
        
        return false;
    }
};