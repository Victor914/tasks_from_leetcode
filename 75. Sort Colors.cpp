//https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red(0), white(0), blue(nums.size() - 1);
        while (white <= blue) {
            if (nums[white] == 0) {
                if (white != red)
                    swap(nums[white], nums[red]);
                ++white;
                ++red;
            } else if (nums[white] == 1)
                ++white;
            else {
                swap(nums[white], nums[blue]);
                --blue;
            }
        }
    }
};  
