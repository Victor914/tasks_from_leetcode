//https://leetcode.com/problems/pascals-triangle-ii/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vect(rowIndex + 1, 1);
        for (int i = 2; i < rowIndex + 1; ++i) {            
            int buff = vect[0];
            for (int j = 1; j < i; ++j) {
                int buff_2 = vect[j];
                vect[j] = buff + vect[j];
                buff = buff_2;
            }
        }
        return vect;    
    }
};