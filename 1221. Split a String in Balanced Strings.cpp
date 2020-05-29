//https://leetcode.com/problems/split-a-string-in-balanced-strings/
class Solution {
public:
    int balancedStringSplit(string s) {
        int count(0),
            result(0);
        for (auto ch: s) {
            if (ch == 'R')
                ++count;
            else
                --count;
            if (!count)
                ++result;
        }
        return result;
    }
};