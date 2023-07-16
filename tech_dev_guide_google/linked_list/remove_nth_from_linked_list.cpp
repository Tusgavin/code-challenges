#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        
        ListNode* tmp = head;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (n != 0 && fast->next != nullptr) {
            fast = fast->next;
            n--;
        }
        
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        if (n != 0) {
            return tmp->next;
        }
        
        slow->next = slow->next->next;
        return tmp;
    }
};