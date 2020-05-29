//https://leetcode.com/problems/move-zeroes/submissions/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int shift(0);
        for (int i = 0; i < nums.size(); ++i)
            if (!nums[i]) 
                ++shift;
            else if (shift)
                nums[i - shift] = nums[i];
        for (int i = nums.size() - shift; i < nums.size(); ++i)
            nums[i] = 0;
    }
};