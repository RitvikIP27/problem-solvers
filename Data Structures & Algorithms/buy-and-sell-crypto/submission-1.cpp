class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            min_price=min(min_price,prices[i]);
            int profit=prices[i]-min_price;//remains 0 for eqv or smaller no. as min pointer moves along with it
            max_profit=max(max_profit,profit);

        }
        return max_profit;
        
    }
};
