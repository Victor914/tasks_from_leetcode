//https://leetcode.com/problems/valid-palindrome-ii/submissions/
class Solution {
    bool valid(string &s, int l, int r, int count) {
        if (count > 1) return 0;
        while (l < r) {
            if (s[l] == s[r]) {
                l++; r--;
            }
            else {
                return  valid(s, l + 1, r, count + 1) || 
                        valid(s, l, r - 1, count + 1);
            }
        }
        return 1;
    }
public:
    bool validPalindrome(string s) {
        int l(0), 
            r(s.size() - 1);
        return valid(s, l, r, 0);
    }
};

