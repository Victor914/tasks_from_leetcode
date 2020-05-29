//https://leetcode.com/problems/top-k-frequent-elements/submissions/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> on_val;
        for(int el : nums) 
            ++on_val[el];  
        
        vector<int> result;
        // pair<first, second>: first is frequency,  second is number
        priority_queue<pair<int, int> > pq;
        for(auto it = on_val.begin(); it != on_val.end(); ++it) {
            pq.push(make_pair(it->second, it->first) );
            if(pq.size() > on_val.size() - k) {
                result.push_back(pq.top().second);
                pq.pop();
            }
        }
        return result;
    }
};

