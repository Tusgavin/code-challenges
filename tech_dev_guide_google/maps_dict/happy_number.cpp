#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        seen.insert(n);
        
        while (true) {
            int overall = 0;
        
            while (n != 0) {
                int v = n % 10;
                n = n / 10;

                overall += pow(v, 2);
            }

            if (overall == 1) {
                return true;
            } else if (seen.count(overall) > 0) {
                return false;
            }

            seen.insert(overall);
            n = overall;
        }
    }
};