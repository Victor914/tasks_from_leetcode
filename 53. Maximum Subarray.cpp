//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp = nums[0],
        m_x = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            temp = max(temp + nums[i], nums[i]);
            m_x = max(m_x, temp);
        }
        return m_x;
    }
};
