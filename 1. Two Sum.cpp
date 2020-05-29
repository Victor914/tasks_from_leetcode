//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        map<int, int> dict;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = dict.find(target - nums[i]); 
            if (it != dict.end()) {
                res[1] = i; res[0] = it->second;
                return res;    
            } else {
                dict[nums[i]] = i;
            }
        }
        return res;
    }
};
