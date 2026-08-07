class Solution {
public:
   void backtrack(vector<int>& candidates, int target, vector<vector<int>>& res,
                   vector<int>& combi, int sum, int index) {
        if (sum == target) {
            res.push_back(combi);
            return;
        }
        if (sum > target) return;

        for (int i = index; i < candidates.size(); ++i) {
            combi.push_back(candidates[i]);
            backtrack(candidates, target, res, combi, sum + candidates[i], i); 
            combi.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combi;
        backtrack(candidates, target, res, combi, 0, 0);
        return res;
    }
};