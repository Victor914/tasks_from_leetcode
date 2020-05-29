//https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* lst_1, ListNode* lst_2) {
        ListNode *head = new ListNode(0), *temp = head;
        while(lst_1 && lst_2) {
            if(lst_1->val < lst_2->val) {
                temp->next = lst_1;
                lst_1 = lst_1->next;
            } else {
                temp->next = lst_2;
                lst_2 = lst_2->next;
            }
            temp = temp->next;
        }
        if(lst_1)
            temp->next = lst_1;
        if(lst_2)
            temp->next = lst_2;
        return head->next;
    }
};