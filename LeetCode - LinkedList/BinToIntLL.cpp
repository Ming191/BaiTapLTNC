#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while (head)
        {
            next = head->next;
            head->next = prev;

            prev = head;
            head = next;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* rev = reverse(head);
        int res = 0;
        int i = 0;
        while (rev)
        {
            res += pow(2,i)*(rev->val);
            i++;
            rev = rev->next;
        }
        
    }
};

int main()
{

}
/*
1 2 3 4 5 
s s s
f   f   f
*/