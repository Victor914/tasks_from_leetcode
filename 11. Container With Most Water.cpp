//https://leetcode.com/problems/container-with-most-water/submissions/
class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.empty())
            return 0;
        int left(0), 
            right(height.size() - 1),
            square(0);
        while (left < right) {
            square = max((right - left) * min(height[left], height[right]), square);
            height[left] > height[right] ? --right : ++left;            
        }
        return square;
    }
};
