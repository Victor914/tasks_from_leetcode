//https://leetcode.com/problems/degree-of-an-array/
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, pair<int,vector<int>>> mp;
        for(int i = 0; i < nums.size(); ++i) {
            ++mp[nums[i]].first;
            mp[nums[i]].second.push_back(i);
        }
        int degree(0);
        for (auto it : mp) {
            if (it.second.first > degree)
                degree = it.second.first;
        }   
        int result(nums.size());
        for (auto it : mp) {
            if (it.second.first == degree) {
                int m_n = *min_element(it.second.second.begin(), it.second.second.end());
                int m_x = *max_element(it.second.second.begin(), it.second.second.end());
                if (m_x - m_n < result)
                    result = m_x - m_n;
            }
        }
        return ++result;
    }
};

                