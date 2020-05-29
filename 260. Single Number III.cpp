//https://leetcode.com/problems/single-number-iii/submissions/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int un_match(0),
            n_1(0),
            n_2(0);
        for (int el : nums)
            un_match ^= el;
        int ident = un_match & ~(un_match - 1);
        for (int el : nums)
            if (ident & el)
                n_1 ^= el;
            else
                n_2 ^= el;
        return {n_1, n_2};
    }
};