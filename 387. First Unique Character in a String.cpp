//https://leetcode.com/problems/first-unique-character-in-a-string/submissions/
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> rep(26, 0);
        for (auto el : s)
            ++rep[el - 'a'];
        for (int i = 0; i < s.size(); ++i)
            if (rep[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};