class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int profit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
        else if((prices[i]-mini)>profit)
           profit=prices[i]-mini;
        
        }
        return profit;
    }   
};