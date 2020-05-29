//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;
        int m_n(prices[0]),
            m_x(0);
        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < m_n) 
                m_n = prices[i];
            else if (prices[i] - m_n > m_x)
                m_x = prices[i] - m_n;
        }
        return m_x;
    }
};