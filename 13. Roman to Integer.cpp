//https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        int minus(0);
        int plus(0);
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == 'I')
                if (s[i + 1] == 'V' || s[i + 1] == 'X')
                    minus += 1;
                else
                    plus += 1;
            else if (s[i] == 'V')
                plus += 5;
            else if (s[i] == 'X')
                if (s[i + 1] == 'L' || s[i + 1] == 'C')
                    minus += 10;
                else
                    plus += 10;
            else if (s[i] == 'L')
                plus += 50;
            else if (s[i] == 'C')
                if (s[i + 1] == 'D' || s[i + 1] == 'M')
                    minus += 100;
                else
                    plus += 100;
            else if (s[i] == 'D')
                plus += 500;
            else if (s[i] == 'M')
                plus += 1000;
        }
        if (s[s.size() - 1] == 'I') plus += 1;
        else if (s[s.size() - 1] == 'V') plus += 5;
        else if (s[s.size() - 1] == 'X') plus += 10;
        else if (s[s.size() - 1] == 'L') plus += 50;
        else if (s[s.size() - 1] == 'C') plus += 100;
        else if (s[s.size() - 1] == 'D') plus += 500;
        else if (s[s.size() - 1] == 'M') plus += 1000;
        return plus - minus;
    }
};