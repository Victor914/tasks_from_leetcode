//https://leetcode.com/problems/reverse-integer/solution/
class Solution {
public:
    int reverse(int x) {
        long long result(0), x_2(x) ;
        bool sign(0);
        if(x_2 < 0) {
            x_2 = - x_2;
            sign = 1;
        }
        while (x_2) {           
            result += x_2 % 10;
            
            result *= 10;
            x_2 /= 10;
        }
        result /= 10;
        if (sign) result = - result;
        if (result < -2147483648 || result > 2147483647) 
                return 0;
        return result; 
    }
};