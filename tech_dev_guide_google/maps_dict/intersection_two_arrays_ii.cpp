#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> occ;
        vector<int> s;
        
        for (auto i : nums1) {
            if (occ.count(i)) {
                occ[i] += 1;
                continue;
            }
            
            occ[i] = 1;
        }
        
        for (auto i : nums2) {
            if (occ.count(i) && occ[i] > 0) {
                s.push_back(i);
                occ[i] -= 1;
            }
        }
        
        return s;
    }
};