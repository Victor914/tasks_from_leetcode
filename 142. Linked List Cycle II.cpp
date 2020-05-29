//https://leetcode.com/problems/linked-list-cycle-ii/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next)
            return nullptr;
        ListNode * fast = head, * slow = head;
        bool fl(1);
        while (fast && fast->next && fl) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                fl = 0;
        }
        if (fast != slow)
            return nullptr;
        slow = head;
        while (slow != fast) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};


        