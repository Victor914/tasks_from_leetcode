//https://leetcode.com/problems/sort-list/
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
    ListNode* merge_two_list(ListNode* lst_1, ListNode* lst_2) {
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
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode *fast = head->next, 
                 *slow = head;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *left = head, 
                 *right = slow->next;
        slow->next = nullptr;
        left = sortList(left);
        right = sortList(right);
        return merge_two_list(left, right);
    }
};