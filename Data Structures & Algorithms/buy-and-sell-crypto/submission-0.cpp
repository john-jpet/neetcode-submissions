class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curmin = prices[0], r = 0;
        for(int i = 0; i < prices.size(); i++) {
            //cout << curmin << " " << r << endl;
            curmin = min(prices[i], curmin);
            r = max(r, prices[i] - curmin);
        }
        return r;
    }
};
