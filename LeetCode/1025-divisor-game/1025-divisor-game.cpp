class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n + 1, false);
        for (int i = 2; i <= n; ++i) {
            for (int x = 1; x <= i / 2; ++x) {
                if (i % x == 0 && !dp[i - x]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};