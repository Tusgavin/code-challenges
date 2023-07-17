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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sol = 0;
        int rem = 0;
        int val = 0;
        
        ListNode* total = new ListNode();
        ListNode* head = total;
        
        while (l1 != nullptr || l2 != nullptr) {
            int sum = rem;
            
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            val = sum % 10;
            rem = int(sum / 10);
            
            total->val = val;
            
            if (rem == 0 && l1 == nullptr && l2 == nullptr) {
                total->next = nullptr;
                break;
            }
            
            total->next = new ListNode();
            total = total->next;
        }
        
        if (rem != 0) {
            total->val = rem;
            total->next = nullptr;
        }
        
        return head;
    }
};