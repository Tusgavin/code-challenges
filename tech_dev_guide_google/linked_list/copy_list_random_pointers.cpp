#include <bits/stdc++.h>

using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};


class Solution {
public:
    unordered_map<Node*, Node*> random_mapping;
    
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;
        
        Node *head_copy = head;
        
        Node* tmp = new Node(head->val);

        random_mapping[head] = tmp;
        head = head->next;
        
        Node* new_head = tmp;
        
        while (head != nullptr) {
            Node* n = new Node(head->val);
                        
            random_mapping[head] = n;
            
            head = head->next;
            tmp->next = n;
            tmp = tmp->next;
        }
        
        tmp->next = nullptr;
        tmp = new_head;
        head = head_copy;
        
        while (head != nullptr) {
            if (random_mapping.count(head->random)) {   
                tmp->random = random_mapping[head->random];
            } else {
                tmp->random = nullptr;
            }
            
            head = head->next;
            tmp = tmp->next;
        }
        
        return new_head;
        
    }
};