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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return head;
        
        ListNode* it = head;
        int count = 0;
        while (it != nullptr) {
            count++;
            it = it->next;
        }
        
        k = k % count;
        
        while (k > 0) {
            ListNode* tmp = head;
            
            while (tmp->next->next != nullptr) tmp = tmp->next;
            
            
            tmp->next->next = head;
            head = tmp->next;
            tmp->next = nullptr;
            k--;
        }
        
        return head;
    }
};