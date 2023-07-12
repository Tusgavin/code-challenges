#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int rep = -1;
        unordered_map<char, int> occ;
        
        for (char c : s) {
            if (occ.count(c)) {
                occ[c] += 1;
                continue;
            }
            
            occ[c] = 1;
        }   
        
        int ind = 0;
        for (char c : s) {
            if (occ[c] == 1) {
                return ind;
            }
            
            ind++;
        }
        
        return rep;
    }
};