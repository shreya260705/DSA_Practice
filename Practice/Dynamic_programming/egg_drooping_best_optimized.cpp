class Solution {
public:
    int eggDrop(int n, int k) {
        vector<vector<long long>> dp(k + 1, vector<long long>(n + 1, 0));

        int moves = 0;

        while (dp[moves][n] < k) {
            moves++;

            for (int e = 1; e <= n; e++) {
                dp[moves][e] = dp[moves - 1][e - 1]
                             + dp[moves - 1][e]
                             + 1;
            }
        }

        return moves;
    }
};