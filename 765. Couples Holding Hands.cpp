//https://leetcode.com/problems/couples-holding-hands/submissions/
class Solution {
    vector<int> parent,
                rank;
    int cnt = 0;
    void uni(int a, int b) {
        int ra = root(a);
        int rb = root(b);
        if (ra == rb)
            return;
        cnt++;
        if (rank[ra] < rank[rb]) {
            parent[ra] = parent[rb];
            rank[rb] += rank[ra];
        } else {
            parent[rb] = parent[ra];
            rank[ra] += rank[rb];
        }
    }
    int root(int i) {
        if (parent[i] == i)
            return i;
        while (parent[i] != i) {
            parent[i] = parent[parent[i]];
            i = parent[i];
        }
        return i;
    }
    public:
    int minSwapsCouples(vector<int>& row) {
        int n = row.size();
        parent.resize(n / 2);
        rank.resize(n / 2, 1);
        for (int i = 0; i < n/2; ++i)
            parent[i]=i;
        for (int i = 0; i < n/2; ++i) {
            int a = row[2 * i];
            int b = row[2 * i + 1];
            uni(a / 2, b / 2);
        }
        return cnt;
    }
};


    
    