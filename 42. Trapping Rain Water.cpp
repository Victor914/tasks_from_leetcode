//https://leetcode.com/problems/trapping-rain-water/submissions/
class Solution {
public:
    int trap(vector<int>& height) {
        int l(0), 
            r(height.size() - 1),    
            max_l(0),
            max_r(0),
            result(0);
        while (l < r) {
            if (height[l] <= height[r]) {
                if (height[l] >= max_l)
                    max_l = height[l];
                else
                    result += max_l - height[l];
                ++l;
            } else {
                if (height[r] >= max_r)
                    max_r = height[r];
                else
                    result += max_r - height[r];
                --r;
            }
        }
        return result;
    }
};