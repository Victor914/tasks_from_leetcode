//https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return 1;
        ListNode   *tail(nullptr),
                   *ptr_1(head),
                   *ptr_2(nullptr);
        int count(0),
            iter(0);
        while (ptr_1) {
            ptr_1 = ptr_1->next;
            ++count;
        }
        ptr_1 = head;
        while (iter < count / 2) {
            ptr_1 = ptr_1->next;
            ++iter;
        }
        tail = ptr_1;
        while (ptr_1) {
            ptr_2 = ptr_1->next;
            if (ptr_1->next) {
                if (ptr_1->next->next)
                    ptr_1->next = ptr_1->next->next;
                else
                    ptr_1->next = nullptr;
                ptr_2->next = tail;
                tail = ptr_2;
            } else 
                ptr_1 = nullptr;
        }
        iter = 0;
        while (iter < count / 2) {
            if (head->val != tail->val)
                return 0;
            tail = tail->next;
            head = head->next;
            ++iter;
        }
        return 1;
    }
};
