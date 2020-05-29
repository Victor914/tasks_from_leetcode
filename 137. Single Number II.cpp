//https://leetcode.com/problems/single-number-ii/submissions/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int match_0(0);
        int match_1(0);
        for(int i : nums) {
            match_0 = ~match_1 & (match_0 ^ i);
            match_1 = ~match_0 & (match_1 ^ i);
        }
        return match_0;
    }
};