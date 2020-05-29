//https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {
        if (n  <= 0)
            return 0;
        int slow(n), fast(n); 
        do { 
            slow = sum_square(slow); 
            fast = sum_square(sum_square(fast)); 
        } while (slow != fast); 
        return (slow == 1); 
    }
    
    int sum_square(int n) { 
        int sum = 0; 
        while (n) { 
            sum += (n % 10) * (n % 10); 
            n /= 10; 
        } 
        return sum; 
    }
};