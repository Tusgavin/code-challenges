#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;
        int x = 0;
        int y = 0;
        
        for (auto& row : board) {
            for (auto& val : row) {
                if (val == '.') {
                    y++;
                    continue;
                }
                
                string row_key = to_string(x) + "(" + to_string(val) + ")";
                string col_key = "(" + to_string(val) +")" + to_string(y);
                string grid_key = to_string(int(x/3)) + "(" + to_string(val) +")" + to_string(int(y/3));
                
                if (s.count(row_key) > 0 || s.count(col_key) > 0 || s.count(grid_key) > 0) {
                    return false;
                }
                
                s.insert(row_key);
                s.insert(col_key);
                s.insert(grid_key);
                
                y++;
            }
            
            y = 0;
            x++;
        }
        
        return true;
    }
};