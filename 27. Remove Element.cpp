//https://leetcode.com/problems/remove-element/submissions/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int shift(0);
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] == val) 
                ++shift;
            else// if (shift)
                nums[i - shift] = nums[i];
        return nums.size() - shift;
        int i(0), j(nums.size() - 1);
        while (i < j) { 
            if (nums[i] == val) {
                if (nums[j] != val) {
                    swap(nums[i], nums[j]);
                    ++i;
                }
                nums.pop_back();
                --j;
            } else
                ++i;
        }
        return i;
    }
}; 