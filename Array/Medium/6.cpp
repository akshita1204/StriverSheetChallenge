//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int profit=0;
       int mini=prices[0];
       for(int i=1;i<n;i++)
       {
        if(prices[i]>mini) profit=max(profit,prices[i]-mini);
        else if(prices[i]<mini) mini=prices[i];
       } 
       return profit;
    }
};
*/