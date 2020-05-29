//https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[0],
            slow = nums[0];
        bool begin(1);
        while (begin || fast != slow) {
                begin = 0;
                slow = nums[slow];
                fast = nums[nums[fast]];
        }
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};