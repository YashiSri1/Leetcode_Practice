class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int val:nums){
            int frq=0;
            for(int el :nums){
                if(el==val)
                frq++;
            }
            if(frq>nums.size()/2)
            return val;
        }
        return -1;
    }
};