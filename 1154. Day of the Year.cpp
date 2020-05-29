//https://leetcode.com/problems/day-of-the-year/
class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4)), 
            month = stoi(date.substr(5, 2)), 
            day = stoi(date.substr(8, 2)),
            result = 0;
        vector<int> days = {31, 28, 31, 30, 31, 30 , 31 , 31, 30, 31, 30 ,31};
        for (int i = 0; i < month - 1; ++i)
            result += days[i];
        result += day;
        result += (month > 2 && !(year % 4) && (year % 100 || !(year % 400))) ? 1 : 0;       
        return result;
    }
};
