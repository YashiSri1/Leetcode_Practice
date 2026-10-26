class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();

        vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    a[i][j] = 1 + a[i - 1][j - 1];
                } else {
                    a[i][j] = max(a[i - 1][j], a[i][j - 1]);
                }
            }
        }

        return a[n][m];
    }
};