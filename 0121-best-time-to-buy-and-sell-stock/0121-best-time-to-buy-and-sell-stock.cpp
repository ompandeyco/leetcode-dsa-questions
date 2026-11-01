class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bestBuy = prices[0];
        int maxProfit = 0;

        for(int i=0; i<n; i++){
            if(prices[i] > bestBuy){
                maxProfit = max(prices[i]-bestBuy, maxProfit);
            }
            bestBuy = min(prices[i], bestBuy);
        }
        return maxProfit;
    }
};