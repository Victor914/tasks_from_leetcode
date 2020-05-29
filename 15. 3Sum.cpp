//https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;        
        if (nums.size() <= 2) return result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] > 0) return result;
            if (!i || nums[i] != nums[i - 1]) {
                for (int l = i + 1, r = nums.size() - 1; l < r;) {
                    int expr = nums[i] + nums[l] + nums[r];
                    if (!expr) {
                        result.push_back(vector<int> {nums[i], nums[l], nums[r]});
                        while (l < r && nums[l] == nums[++l]);
                        while (l < r && nums[r] == nums[--r]);
                    } else if (expr > 0) --r;
                    else ++l;
                }
            }
        }
        return result;
    }
};