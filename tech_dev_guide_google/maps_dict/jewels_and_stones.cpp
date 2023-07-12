#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> j;
        int count = 0;
        
        for (char& je : jewels) {
            j.insert(je);
        }
        
        for (char& st : stones) {
            if (j.count(st)) {
                count++;
            }
        }
        
        return count;
    }
};