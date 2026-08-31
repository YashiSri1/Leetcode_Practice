class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        set<int> s;

        for(int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int cnt = 1;

            for(int j = i + 1; j < nums.size(); j++) {
                if(temp == nums[j])
                    cnt++;
            }

            if(cnt > nums.size() / 3) {
                s.insert(nums[i]);
            }
        }

        for(auto x : s) {
            ans.push_back(x);
        }

        return ans;
    }
};