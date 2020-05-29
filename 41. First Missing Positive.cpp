//https://leetcode.com/problems/first-missing-positive/submissions/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i(0);
        int n = nums.size();
        while (i < n) {
            int temp = nums[i];
            if (temp == i + 1) {
                i++;
            } else if (temp < 1 || temp > n || temp == nums[temp - 1]) {
                n--;
                nums[i] = nums[n];
            } else {
                nums[i] = nums[temp - 1];
                nums[temp - 1] = temp;
            }
        }
        return n + 1;
    }
};