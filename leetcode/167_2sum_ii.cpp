#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int b = 0;
        int e = numbers.size() - 1;
        vector<int> ans;

        while (b < e) {
            if (numbers[b] + numbers[e] > target) {
                e--;
            } else if (numbers[b]+ numbers[e] < target) {
                b++;
            } else {
                ans.push_back(b + 1);
                ans.push_back(e + 1);
                break;
            }
        }

        return ans;
    }
};