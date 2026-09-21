class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxi = 0, sum = 0;
        int n = cardPoints.size();
        for(int j = 0; j < k; j++) {
            sum += cardPoints[j];
        }
        maxi = sum;
        int i = k - 1;
        int j = n - 1;
        while(i >= 0) {
            sum -= cardPoints[i];
            sum += cardPoints[j];
            i--;
            j--;
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};