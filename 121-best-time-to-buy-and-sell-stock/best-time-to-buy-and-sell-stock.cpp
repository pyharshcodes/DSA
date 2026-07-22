class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0, Bestbuy = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>Bestbuy){
                MaxProfit=max(MaxProfit, prices[i]-Bestbuy);
            }
            Bestbuy = min(Bestbuy, prices[i]);
        }
        return MaxProfit;
    }
};