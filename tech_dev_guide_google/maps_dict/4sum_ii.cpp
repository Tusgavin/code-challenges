#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sum_12;
        unordered_map<int, int> sum_34;
        int sol = 0;
        
        for (int i = 0; i < nums1.size(); ++i) {
            for (int j = 0; j < nums2.size(); ++j) {
                int key = nums1[i] + nums2[j];
                
                if (sum_12.count(key)) {
                    sum_12[key] += 1;
                    continue;
                }
                
                sum_12[key] = 1;
            }   
        }
        
        for (int k = 0; k < nums3.size(); ++k) {
            for (int l = 0; l < nums4.size(); ++l) {
                int key = nums3[k] + nums4[l];
                int op = key * (-1);
                
                if (sum_12.count(op)) {
                    sol += sum_12[op];
                }
            }   
        }
        
        return sol;
    }
};