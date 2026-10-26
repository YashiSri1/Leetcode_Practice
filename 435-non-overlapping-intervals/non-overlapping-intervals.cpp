class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int cnt=1;
        int n=intervals.size();
       sort(intervals.begin(), intervals.end(),
     [](const vector<int>& rowA, const vector<int>& rowB) {
         return rowA[1] < rowB[1];
     });
        int last=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=last){
            cnt++;
            last=intervals[i][1];}
            // else
            // continue;
        }
        return n-cnt;
    }
};