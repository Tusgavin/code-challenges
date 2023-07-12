#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> occur;
        int min = 2001;
        vector<string> solution;
        
        for (int i = 0; i < list1.size(); ++i) {
            occur[list1[i]] = i;
        }
        
        for (int i = 0; i < list2.size(); ++i) {
            if (occur.count(list2[i])) {
                if (occur[list2[i]] + i < min) {
                    min = occur[list2[i]] + i;
                    solution.clear();
                    solution.push_back(list2[i]);
                } else if (occur[list2[i]] + i == min) {
                    solution.push_back(list2[i]);
                }
            }
        }
        
        return solution;
    }
};