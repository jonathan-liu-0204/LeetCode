class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minbuy = prices[0];
        int profit = 0;
        
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < minbuy){
                minbuy = prices[i];
            }
            else{
                profit = max(profit, (prices[i] - minbuy));
            }
        }
        
        return profit;
    }
};

// Runtime: 237 ms, faster than 11.79% of C++ online submissions for Best Time to Buy and Sell Stock.
// Memory Usage: 93.3 MB, less than 90.01% of C++ online submissions for Best Time to Buy and Sell Stock.