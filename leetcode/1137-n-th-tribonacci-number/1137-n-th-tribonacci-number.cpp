class Solution {
public:
    vector<int> dp;
    Solution(): dp(38, -1)
    {
    }
    int tribonacci(int n) {
        if (dp[n] != -1) {
            return dp[n];
        }
        if (n == 0 || n == 1) {
            return n;
        }

        if (n == 2) {
            return 1;
        }
        return dp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
};