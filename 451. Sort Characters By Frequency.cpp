//https://leetcode.com/problems/sort-characters-by-frequency/submissions/
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> on_char;
        for(char el : s) {
            ++on_char[el];
        }
        map<int, string> on_freq;
        for(auto el : on_char) {
            on_freq[el.second] += string(el.second, el.first);
        }
        
        string result;
        for(auto rit = on_freq.rbegin(); rit != on_freq.rend(); ++rit) {
            result += rit->second;
        }
        return result;
    }
};