class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
       
        for (int i = 0; i < prices.size(); i++) {
             bool find = false;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[i] >= prices[j]) {
                    find = true;
                    ans.push_back(prices[i] - prices[j]);
                    break;
                }
            }
            if (find==false) {
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};
