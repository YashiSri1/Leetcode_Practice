class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1,ans=0;
       while(lp<rp){
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        int curr=w*h;
        ans=max(curr,ans);
        if(height[lp]<height[rp])
        lp++;
        else rp--;
       }
       return ans;
    }
};