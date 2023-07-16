#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> passed;
        
        while (headA != nullptr || headB != nullptr) {
            if (passed.count(headA)) {
                return headA;
            }
            
            if (headA != nullptr) {
                passed.insert(headA);
                headA = headA->next;
            }
            
            if (passed.count(headB)) {
                return headB;
            }
            
            if (headB != nullptr) {
                passed.insert(headB);
                headB = headB->next;
            }
        
        }
        
        return nullptr;
    }
};