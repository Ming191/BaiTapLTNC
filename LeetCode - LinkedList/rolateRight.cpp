#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        while (k--)
        {
            curr = curr->next;
        }
        
        ListNode* newHead = curr;
        while (curr->next)
        {
            curr = curr->next;
        }
        curr->next = head;

        while (curr->next != newHead)
        {
            curr = curr->next;
        }
        curr->next = nullptr;
        return newHead;
        
    }
};