//https://leetcode.com/problems/rotate-array/submissions/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        revers(nums, 0, n - k - 1);
        revers(nums, n - k, n - 1);
        revers(nums, 0, n - 1);
    }
    
    void revers(vector<int>& nums, int a, int b) {
        int c = (b - a + 1) / 2;
        for (int i = 0; i < c; ++i) {
            swap(nums[a + i], nums[b - i]);
        }
    }
    
    void swap(int &a, int &b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
};