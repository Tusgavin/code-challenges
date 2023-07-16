#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) {
            return false;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        int turn = 0;
        
        while (true) {    
            if (turn % 2 == 0) {
                if (fast->next == nullptr || fast->next->next == nullptr) return false;
                fast = fast->next;
                if (fast == slow) return true;
                fast = fast->next;
                if (fast == slow) return true;
            } else {
                slow = slow->next;
                if (fast == slow) return true;
            }
            
            turn++;
        }
    }
};