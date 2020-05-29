//https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            int ind = abs(nums[i]) - 1;
            if (nums[ind] > 0)
                nums[ind] *= -1;
            else
                res.push_back(ind + 1);
        }
        return res;
    }
};