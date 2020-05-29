//https://leetcode.com/problems/merge-sorted-array/submissions/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i(m - 1), j(n - 1), it(m + n - 1);
        while (i >= 0 && j >= 0 && it >= 0) {
            if (nums1[i] < nums2[j]) {
                nums1[it--] = nums2[j--];
            } else {
                nums1[it--] = nums1[i--];
            }                
        }
        while (j >= 0) {
            nums1[j] = nums2[j];
            j--;
        }
    }
};