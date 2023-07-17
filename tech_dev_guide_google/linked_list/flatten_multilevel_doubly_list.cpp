#include <bits/stdc++.h>

using namespace std;


class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) return nullptr;
        
        Node* tmp = head;
        
        while (tmp != nullptr) {
            if (tmp->child != nullptr) {
                Node* it = tmp->child;
                while (it->next != nullptr) it = it->next;
                it->next = tmp->next;
                if (tmp->next != nullptr) tmp->next->prev = it;
                tmp->next = tmp->child;
                tmp->next->prev = tmp;
                tmp->child = nullptr;
            }
            
            tmp = tmp->next;
        }
        
        return head;
    }
};