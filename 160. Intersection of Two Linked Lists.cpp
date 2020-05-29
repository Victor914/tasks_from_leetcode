//https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size_a(0),
            size_b(0);
        ListNode* a = headA;
        ListNode* b = headB;
        
        while (a) {
            ++size_a;
            a = a->next;
        }
        a = headA;
        while (b) {
            ++size_b;
            b = b->next;
        }
        b = headB;
        while (a && size_a > size_b) {
            a = a->next;
            --size_a;
        }
        while (b && size_b > size_a) {
            b = b->next;
            --size_b;
        }
        ListNode* tmp;
        while (a && b) {
            if (a == b) {
                return a;
            }
            a = a->next;
            b = b->next;            
        }
        return nullptr;
    }
};