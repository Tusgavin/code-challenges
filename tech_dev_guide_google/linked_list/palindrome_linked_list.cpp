#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    queue<int> q;
    
    bool isPalindrome(ListNode* head) {
        return check(head);
    }
    
    bool check(ListNode* h) {
        if (h == nullptr) return true;
        q.push(h->val);
        bool r = check(h->next) && (q.front() == h->val);
        q.pop();
        return r;
    }
};