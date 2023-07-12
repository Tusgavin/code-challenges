#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<pair<int, int>> occ;
        vector<int> sol;
        
        for (auto& num : nums) {
            if (m.count(num)) {
                m[num]++;
                continue;
            }
            
            m[num] = 1;
        }
        
        for (auto& [k, v] : m) {
            occ.push_back(make_pair(k, v));
        }
        
        sort(occ.begin(), occ.end(), [](auto& l, auto& r) {
            return l.second > r.second;
        });
        
        for (int i = 0; i < k; ++i) {
            if (i >= occ.size()) {
                return sol;
            }
            
            sol.push_back(occ[i].first);
        }
        
        return sol;
    }
};