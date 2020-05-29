//https://leetcode.com/problems/missing-number/solution/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ch(0);
        for(int i = 0; i < nums.size(); ++i) {
            ch = ch + nums[i] - i;
        }
        return nums.size() - ch;
        // int x_1 = 0, x_2 = 0;
        // for (int i = 0; i < nums.size(); ++i)
        //     x_1 ^= nums[i]; 
        // for (int i = 0; i <= nums.size(); ++i) 
        //     x_2 ^= i; 
        // return (x_1 ^ x_2); 
    }
};