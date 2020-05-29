//https://leetcode.com/problems/interval-list-intersections/submissions/
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> C;
        int i(0), j(0);
        while (i < A.size() && j < B.size()) {
            vector<int> temp(2, 0);
            temp[0] = max(A[i][0], B[j][0]);
            temp[1] = min(A[i][1], B[j][1]);
            if (temp[0] <= temp[1])
                C.push_back(temp);
            if (A[i][1] > B[j][1]) ++j;
            else ++i;                
        }
        return C;
    }
};