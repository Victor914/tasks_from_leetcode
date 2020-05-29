https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        for (int i = 0; i < str.size() / 2 ;  ++i)
            if (str[i] != str[str.size() - i - 1]) 
                return 0;
        return 1;
    }
};