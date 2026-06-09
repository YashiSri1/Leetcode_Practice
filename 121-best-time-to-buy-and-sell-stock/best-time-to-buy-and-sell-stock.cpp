class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy=prices[0],mp=0;
       for(int i=1;i<prices.size();i++){
        if(prices[i]>buy){
            mp=max(mp,prices[i]-buy);
        }
        buy=min(prices[i],buy);

       } 
       return mp;
    }
};