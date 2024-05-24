#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (slow->next && fast->next->next)
        {
            if(slow->next == fast->next->next) return true;
            else
            {
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        return false;
    }
};

int main()
{

}