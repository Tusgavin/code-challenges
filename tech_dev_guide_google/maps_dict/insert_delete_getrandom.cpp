#include <bits/stdc++.h>

using namespace std;

class RandomizedSet {
public:
    unordered_map<int, int> map;
    vector<int> v;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (map.count(val)) {
            return false;
        }
        v.push_back(val);
        map[val] = v.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (map.count(val)) {
            int i = map[val];
            int last = v.back();
            map[last] = i;
            
            v[i] = last;
            v.pop_back();
            map.erase(val);

            return true;
        }
        
        return false;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */