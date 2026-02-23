class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int arr;
        for(int i=0;i<nums.size();i++){
             arr=nums[i];
             int cnt=0;
             for(int j=0;j<nums.size();j++){
                if(nums[j]==arr){
                    cnt++;
                }
             }
             if(cnt==1) 
              return arr;
        }
        return arr;
    }
};