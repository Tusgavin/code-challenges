#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;
        
        vector<int> si;
        vector<int> ti;
        
        for (int i =  0; i < s.length(); ++i) {
            if (ms.count(s[i]) > 0) {
                si.push_back(ms[s[i]]);
                continue;
            }
            
            si.push_back(i);
            ms[s[i]] = i;
        }
        
        for (int i =  0; i < t.length(); ++i) {
            if (mt.count(t[i]) > 0) {
                ti.push_back(mt[t[i]]);
                continue;
            }
            
            ti.push_back(i);
            mt[t[i]] = i;
        }
        
        return si == ti;
        
        
    }
};