//https://leetcode.com/problems/odd-even-linked-list/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next || !head->next->next)
            return head;
        ListNode * first = head, 
                 * second = head->next, 
                 * temp = head->next,
                 * tail = nullptr;
        int i = 0;
        while(second) {
            first->next = second->next;
            first = second;
            second = second->next;
            if (i % 2 > 0) 
                tail = first;
            ++i;
        }    
        tail->next = temp;
        return head;
    }
};