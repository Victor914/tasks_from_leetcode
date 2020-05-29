//https://leetcode.com/problems/insertion-sort-list/
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
    ListNode* insertionSortList(ListNode* head) {
        if(!head)
            return head;
        ListNode* prev = head;
        ListNode* nextValue = head->next;
        for(ListNode* ptr = head->next; ptr; ptr = nextValue) {
            nextValue = ptr->next;
            if(prev->val <= ptr->val) {
                prev = ptr;
            } else {
               ListNode* ptr3 = head;
               prev->next = nextValue;
               if(ptr3->val > ptr->val) {
                   ptr->next = head;
                   head = ptr;
               } else {
                   while(ptr3!=prev) {
                       if((ptr3->next)->val > ptr->val) {
                           auto tmp = ptr3->next;
                           ptr3->next = ptr;
                           ptr->next = tmp;
                           break;
                       }
                       ptr3 = ptr3->next;
                   }
               }
            }
        }
        return head;
    }
};