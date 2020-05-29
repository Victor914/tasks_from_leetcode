//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/submissions/
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        map<int, vector<int>> dict;
        for (int el : arr) {
            int n = count_ones(el);
            dict[n].push_back(el);
        }
        int k = 0;
        for (auto el : dict)
            for (auto v : el.second)
                arr[k++] = v;
        return arr;
    }
    int count_ones(int n) {
        int count(0);
        while(n) {
            n &= (n - 1);
            ++count;
        }
        return count;
    }
};