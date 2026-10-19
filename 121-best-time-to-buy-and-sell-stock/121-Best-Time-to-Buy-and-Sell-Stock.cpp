class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        
        
        int mini = min_element(prices.begin(), prices.end()) - prices.begin();
        int maxi = *max_element(prices.begin() + mini, prices.end());

        int profit =  maxi - prices[mini] ;

        if(profit>0)
        return profit;

        else{
            profit = 0 ;
            return profit; ;
        }

    }
};