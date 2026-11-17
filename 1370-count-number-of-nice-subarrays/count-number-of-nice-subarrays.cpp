class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int l=0,r=0;
        int ans=0,count=0;
       while(r<nums.size()){
          if(nums[r] % 2 != 0)
           count++;
           while(count>k){
             if(nums[l] % 2 != 0)
               count--;
            l++;
           }
            ans += r-l+1;
           r++;
      }
      return ans;
    }
     int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};