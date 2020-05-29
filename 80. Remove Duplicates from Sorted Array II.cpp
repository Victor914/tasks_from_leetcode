//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int diff = 0;
        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i - 2 - diff] == nums[i]) {
                ++diff;
            } else if (diff)
                nums[i - diff] = nums[i];
        }
        return nums.size() - diff;
    }
};
