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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return nullptr;
        
        ListNode* front = head;
        
        while (front != nullptr) {
            if (head->val == val) {
                head = head->next;
                front = head;
                
                if (head == nullptr) break;
                
                continue;
            }
            
            if (front->next == nullptr) break;
            
            if (front->next->val == val) {
                front->next = front->next->next;
            } else {
                front = front->next;   
            }
        }
        
        return head;
    }
};