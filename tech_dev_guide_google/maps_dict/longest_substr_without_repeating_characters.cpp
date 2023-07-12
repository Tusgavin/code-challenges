#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string cur = "";
        string longest = "";
        unordered_set<char> diff;
        
        for (char c : s) {
            if (diff.count(c) > 0) {
                int pos = cur.find(c);
                cur = cur.substr(pos+1);
            }
            
            diff.insert(c);
            cur.push_back(c);
            
            if (longest.length() < cur.length()) {
                longest = cur;
            }                        
        }
        
        return longest.length();
    }
};