#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }
        
        unordered_set<ListNode*> passed;
        ListNode* fast = head;
        ListNode* slow = head;
        
        int turn;
        
        while (true) {
            if (turn % 2 == 0) {
                if (fast->next == nullptr || fast->next->next == nullptr) return nullptr;
                fast = fast->next;
                if (passed.count(fast)) return fast;
                fast = fast->next;
                if (passed.count(fast)) return fast;
            } else {
                passed.insert(slow);
                slow = slow->next;
            }
            
            turn++;
        }
    }
};