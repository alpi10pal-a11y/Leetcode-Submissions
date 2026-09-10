class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            int price = prices[i];

            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= prices[i]) {
                    price = prices[i] - prices[j];
                    break;
                }
            }

            ans.push_back(price);
        }

        return ans;
    }
};