//https://leetcode.com/problems/majority-element/
class Solution {
public:
    //Boyer–Moore majority vote algorithm
    int majorityElement(vector<int>& nums) {
        int majority_ind(0), count(1);
        for (int i = 1; i < nums.size(); ++i) {
            if (count == 0) {
                majority_ind = i;
                ++count;
            } else if (nums[i] == nums[majority_ind])
                ++count;
            else
                --count;
        }
        return nums[majority_ind];
    }
};