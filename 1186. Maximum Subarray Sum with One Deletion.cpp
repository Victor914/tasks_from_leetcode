//https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/
#include <cmath>

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int with_pass(0),
            without_pass(arr[0]),
            max_sum(arr[0]);
        for (int i = 1; i < arr.size(); ++i) {
            with_pass = max(with_pass + arr[i], without_pass);
            without_pass = max(without_pass + arr[i], arr[i]);
            max_sum = max({max_sum, with_pass, without_pass});
        }
        return max_sum;    
    }
};