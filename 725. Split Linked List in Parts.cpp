//https://leetcode.com/problems/split-linked-list-in-parts/submissions/
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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        ListNode * temp = root;
        int n = 0;
        while (temp) {
            temp = temp->next;
            ++n;
        }
        int cel = n / k,
            ost = n % k;
        temp = root;
        vector<ListNode*> result(k, nullptr);
        for (int i = 0; temp; ++i) {
            int step = ost-- > 0 ? cel + 1 : cel;
            result[i] = temp;
            ListNode * buff = nullptr;
            for (int j = 0; j < step; ++j) {
                buff = temp;
                temp = temp->next;
            }
            buff->next = nullptr;
        }
        return result; 
    }
};