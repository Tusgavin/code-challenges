#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        unordered_map<string, vector<string>> occ;
        
        for (auto s : strs) {
            string ks = s;
            sort(ks.begin(), ks.end());
            
            if (occ.count(ks)) {
                occ[ks].push_back(s);
                continue;
            }
            
            vector<string> _s{s};
            occ[ks] = _s;
        }
        
        for (auto& [key, value] : occ) {
            sol.push_back(value);
        }
        
        return sol;
        
    }
};