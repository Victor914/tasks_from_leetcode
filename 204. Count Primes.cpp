//https://leetcode.com/problems/count-primes/
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> simple(n, 0);
        int count(0);
        
        for (int i = 2; i <= sqrt(n); ++i) {
            if(!simple[i]) {
                for (int j = 2; i * j < n; ++j)
                    simple[i * j] = 1;
            }
        }
        for (int i = 2; i < n; ++i) {
            if(!simple[i]) count++;
        }
        return count;    
    }
};