//https://leetcode.com/problems/rotate-list/
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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;
        ListNode* temp = head, *buf = nullptr;
        int n(0);
        while (temp->next) {
            temp = temp->next;
            ++n;
        }
        temp->next = head;
        n = n + 1 - k % (n + 1);
        temp = head;
        for (int i = 0; i < n; ++i) {
            buf = temp;
            temp = temp->next;
        }
        buf->next = nullptr;
        return temp;
    }
};