#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    unordered_map<string, string> pb;
    
    for (int i = 0; i < n; ++i) {
        string name, phone;
        cin >> name >> phone;
        
        pb[name] = phone;
    }
    
    cin.ignore();
    
    string query;
    while (getline(cin, query)) {
        if (pb.count(query)) {
            cout << query << "=" << pb[query] << endl;
            continue;
        }
        
        cout << "Not found" << endl;
    }
    
    return 0;
}
