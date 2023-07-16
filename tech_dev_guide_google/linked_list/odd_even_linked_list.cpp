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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return head;
        
        ListNode* front = head->next;
        ListNode* back = head;
        
        int index = 0;
        
        while (front != nullptr && front->next != nullptr) {
            ListNode* obn = back->next;
            back->next = front->next;
            front->next = front->next->next;
            back->next->next = obn;
            front = front->next;
            back = back->next;
        }
        
        return head;
    }
};