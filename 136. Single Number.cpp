//https://leetcode.com/problems/single-number/submissions/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int match_0(0);
        for(int el : nums) {
            match_0 ^= el;
        }
        return match_0;
    }
};