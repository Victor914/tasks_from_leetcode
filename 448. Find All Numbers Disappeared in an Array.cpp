//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();      
        for (int i = 0; i < n; ++i) {
            int temp = abs(nums[i]) - 1;
            if (nums[temp] >= 0)
                nums[temp] = -nums[temp];    
        }
        vector<int> res;
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }
        return res;
    }   
};

