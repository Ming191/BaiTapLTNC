#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* d = new ListNode(-1);
        d->next = head;
        
        ListNode* curr = d;

        while (curr->next)
        {
            if(curr->next->val == val)
            {
                curr->next = curr->next->next;
            } else curr = curr->next;
        }
        return d->next;
    }
};

int main()
{

}