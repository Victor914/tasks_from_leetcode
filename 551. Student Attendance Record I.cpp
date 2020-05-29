//https://leetcode.com/problems/student-attendance-record-i/submissions/
class Solution {
public:
    bool checkRecord(string s) {
        int count_a(0),
            count_l(0);
        for (char el : s) {
            if (el == 'A') 
                if (count_a == 1)
                    return 0;
                else
                    ++count_a;
            if (el == 'L') {
                if (count_l == 2)    
                    return 0;
                else                
                    ++count_l;
            } else 
                count_l = 0;
        }
        return 1;
    }
};