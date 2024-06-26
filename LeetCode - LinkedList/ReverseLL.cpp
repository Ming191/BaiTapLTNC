#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;

        while (head)
        {
            ListNode* next = head->next;
            head->next = prev;

            prev = head;
            head = next;
        }
        return prev->next;
    }
};

int main()
{

}