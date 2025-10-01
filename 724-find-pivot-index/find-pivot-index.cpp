class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         for(int i=0;i<nums.size();i++){
            int leftSum=0;
            int rightSum=0;
            //left
            for(int j=0;j<=i-1;j++){
                if(i==0){
                    leftSum=0;
                }
                else{
                leftSum+=nums[j];
                }
            }
            //right
            for(int k=i+1;k<nums.size();k++){
                rightSum+=nums[k];
            }
            if(leftSum==rightSum){
                return i;
            }

        }
        return -1;
        
    }
};