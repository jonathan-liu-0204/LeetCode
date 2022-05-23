class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int buy = prices[0];
        
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            if(prices[i] > buy){
                profit += (prices[i] - buy);
                buy = prices[i];
            }
            
            // cout << "prices[i]: " << prices[i] << "  prices[i-1]: " << prices[i-1]  << "  i: " << i << "  profit: " << profit << endl;
        }
        
        return profit;
    }
};

// Runtime: 3 ms, faster than 96.60% of C++ online submissions for Best Time to Buy and Sell Stock II.
// Memory Usage: 12.9 MB, less than 99.16% of C++ online submissions for Best Time to Buy and Sell Stock II.