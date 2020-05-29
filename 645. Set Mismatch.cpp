//https://leetcode.com/problems/set-mismatch/submissions/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int rep(0), 
            pass(0);
        for (int i = 0; i < nums.size(); ++i) {
            int temp = abs(nums[i]);
            if (nums[temp - 1] > 0) 
                nums[temp - 1] *= -1;
            else 
                rep = temp;
        }
        int i(0);
        while (!pass) {
            if (nums[i] > 0) {
                pass = i + 1;
                break;
            }
            ++i;
        }
        return {rep, pass};
    }
};