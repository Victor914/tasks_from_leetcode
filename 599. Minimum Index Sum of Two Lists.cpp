//https://leetcode.com/problems/minimum-index-sum-of-two-lists/submissions/
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> um;
        for(int i = 0; i < list1.size(); ++i) 
            um[ list1[i] ] = i;
        map<int, vector<string> > m;
        for(int i = 0; i < list2.size(); ++i) {
            if( um.count(list2[i]) )  
                m[ i + um[list2[i]] ].emplace_back(list2[i]);
        }
        return m.begin()->second;
    }
};