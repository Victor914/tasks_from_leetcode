// https://leetcode.com/problems/linked-list-cycle/
// Definition for singly-linked list.
// struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
// };
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * slow = head, *fast = head;
        while(slow) {
            if(fast && fast->next && fast->next->next)
                fast = fast->next->next;
            else
                fast = nullptr;
            slow = slow->next;
            if(slow && fast && fast == slow)
                return 1;
        }
        return 0;
    }
};