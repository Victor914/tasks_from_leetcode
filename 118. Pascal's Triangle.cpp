//https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect;
        if (!numRows) return vect; 
        for (int i = 0; i < numRows; ++i) {
            vect.push_back(vector<int>(i+1, 1));
            for (int j = 1; j < i; ++j) {
                vect[i][j] = vect[i - 1][j - 1] + vect[i - 1][j];
            }
        }
        return vect;
    }
};