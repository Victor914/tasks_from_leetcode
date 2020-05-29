//https://leetcode.com/problems/add-digits/submissions/
//Формула конгруэнтности
class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;
        else if (num && !(num % 9))
            return 9;
        else
            return num % 9;
    }
    
};